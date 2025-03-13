import rclpy
from rclpy.node import Node
from interface.srv import Aibo

class ArrayServiceClient(Node):

    def __init__(self):
        super().__init__('array_service_client_2')#nombre del nodo tiene diferente, pero el nombre de abajo que es del servicio debe ser el mismo.
        self.client = self.create_client(Aibo, 'array_service_1')#se define la interface a usar y se define el nombre del servicio  que deberia de ser el mismo que el server.
        
        
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')
        self.request = Aibo.Request()
        
        
    #Es la funcion que se encarga de enviar el request al server
    def send_request(self, input_array):
        self.request.input_array = input_array
        self.future = self.client.call_async(self.request) #envia el array
        
        

def main(args=None):
    while True:
        try:
            rclpy.init(args=args)
            node = ArrayServiceClient()
            
            input_str = input('Ingrese el valor del array (separado por comas, ej. 1.0,2.0,3.0): ')
            
            # Convert the input string to a list of floats
            try:
                input_array = [float(x) for x in input_str.split(',')]
                
            except ValueError:
                node.get_logger().error('Invalid input. Ingrese con comas.')
                rclpy.shutdown()
                return
            
            node.send_request(input_array)


            #Pregunta si el servidor retorna algun valor al cliente, y si es el caso lo immprime en pantalla, caso contrario dice error.
            rclpy.spin_until_future_complete(node, node.future)
            if node.future.result() is not None:
                response = node.future.result()
                node.get_logger().info(f'Result: Output array, pose={response.output_array}')
                x=response.output_array[0]
                y=response.output_array[1]
                z=response.output_array[2]
                yaw=response.output_array[3]
                pitch=response.output_array[4]
                roll=response.output_array[5]
                print('x: ',x,'  y: ',y,'  z: ',z,'ya: ',yaw,'p: ',pitch,'r: ',roll)
            else:
                node.get_logger().info('El servicio a fallado')
        except:
            node.destroy_node()
            rclpy.shutdown()

if __name__ == '__main__':
    main()

