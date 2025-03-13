import rclpy
from rclpy.node import Node
from interface.srv import Aibo
import numpy as np


class ArrayServiceServer(Node):

    def __init__(self):
        super().__init__('array_service_server_1') # nombrando el nodo
        
        self.srv = self.create_service(Aibo, 'array_service_1', self.handle_array_service) # definimos el nombre del servicio y el nombre de la interface, ademas se define la funcion del programa que vayamos realizar.
        self.get_logger().info('Service ready to receive requests.') # si se inicializa bien el server.



    def cinema(self,th1, th2, th3,th4, L1, L2):
        # Convertir ángulos de grados a radianes
        th1 = np.deg2rad(th1)
        th2 = np.deg2rad(th2)
        th3 = np.deg2rad(th3)
        th4 = np.deg2rad(th4)

        # Definir las matrices de transformación
        Ry1 = np.array([
            [np.cos(-th1), 0, np.sin(-th1), 0],
            [0, 1, 0, 0],
            [-np.sin(-th1), 0, np.cos(-th1), 0],
            [0, 0, 0, 1]
        ])

        Rx1 = np.array([
            [1, 0, 0, 0],
            [0, np.cos(th2), -np.sin(th2), 0],
            [0, np.sin(th2), np.cos(th2), 0],
            [0, 0, 0, 1]
        ])

        Tz1 = np.array([
            [1, 0, 0, 0],
            [0, 1, 0, 0],
            [0, 0, 1, -L1],
            [0, 0, 0, 1]
        ])

        Ry2 = np.array([
            [np.cos(-th3), 0, np.sin(-th3), 0],
            [0, 1, 0, 0],
            [-np.sin(-th3), 0, np.cos(-th3), 0],
            [0, 0, 0, 1]
        ])

        Tz2 = np.array([
            [1, 0, 0, 0],
            [0, 1, 0, 0],
            [0, 0, 1, -L2],
            [0, 0, 0, 1]
        ])
        
        Ry3 = np.array([
            [np.cos(-th4), 0, np.sin(-th4), 0],
            [0, 1, 0, 0],
            [-np.sin(-th4), 0, np.cos(-th4), 0],
            [0, 0, 0, 1]
        ])
        # Calcular la matriz M
        M = Ry1 @ Rx1 @ Tz1 @ Ry2 @ Tz2 @ Ry3

        # Multiplicar la matriz M por el vector [0, 0, 0, 1]
        M_simplified = M @ np.array([0, 0, 0, 1])
        #M_simplified2 = M @ np.array([0, 1, 0, 0])

        # Extraer los valores de x, y, z
        x = M_simplified[0]
        y = M_simplified[1]
        z = M_simplified[2]
        
        yaw =  np.arctan2(M[1][0], M[0][0])
        yaw = np.rad2deg(yaw)
        pitch = np.arctan2(-M[2,0], np.sqrt(M[2,1]**2 + M[2,2]**2))
        pitch = np.rad2deg(pitch)
        roll = np.arctan2(M[2,1], M[2,2])
        roll = np.rad2deg(roll)
        # Retornar los resultados
        return [x, y, z,yaw,pitch,roll]


####La funcion de abajo de abajo se ejecuta siempre que el cliente haga una peticion:
    def handle_array_service(self, request, response):
        self.get_logger().info(f'Received array: {request.input_array}')
        # Process the input_array and generate output_array (for example, double the values)
        ####PROGRAM cinematica
        entrada= request.input_array
        
        L1 = 69.5
        L2 = 71.5
        
        response.output_array=self.cinema(entrada[0],entrada[1],entrada[2],entrada[3],L1,L2)
        ###################
        return response ##enviando el resultado de la peticion del cliente.
########################

####inicializando todo
def main(args=None):
    rclpy.init(args=args)
    node = ArrayServiceServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
