import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray


class ArraySubscriber(Node):
    #Configuramos el nodo
    def __init__(self):
        super().__init__('Nodo1Suscriptor') #nomnbre del nodo
        self.subscription = self.create_subscription(
            Float64MultiArray,
            'array_topic',
            self.listener_callback,
            10) #nombre del topico y tipo DE DATO.
        self.subscription  # prevent unused variable warning



##############################################3 Aqui dentro de la funcion va tu programa
 #################################################
    
    #SI NECESITAS FUNCIONES LAS CREAS ACA.
    
    ###################################################
    def listener_callback(self, msg): #la variable msg.data tiene el mensaje del publicador en el formato que establecimos en el publicador
        self.datos_rev=list(msg.data)
        self.get_logger().info(f'Recibido array: {msg.data}')
        
        if(self.datos_rev==[0.0,0.0,0.0]):
            print("Motores: 1,1   Estado: Adelante")
        elif(self.datos_rev==[0.0,0.0,1.0]):
            print("Motores: 0,1   Estado: Derecha")
        elif(self.datos_rev==[0.0,1.0,0.0]):
            print("Motores: 0,0   Estado: Alto")
        elif(self.datos_rev==[0.0,1.0,1.0]):
            print("Motores: 0,1   Estado: Derecha")
        elif(self.datos_rev==[1.0,0.0,0.0]):
            print("Motores: 1,0   Estado: Izquierda")
        elif(self.datos_rev==[1.0,0.0,1.0]):
            print("Motores: 1,1   Estado: Adelante")
        elif(self.datos_rev==[1.0,1.0,0.0]):
            print("Motores: 1,0   Estado: Izquierda")
        elif(self.datos_rev==[1.0,1.0,1.0]):
            print("Motores: 0,0   Estado: Alto")
        
        
        
        
        #self.get_logger().info('mensaje hola mundo')   Es el euivalente a print pero mas ordena.
##############################################################



#inicializamos todo
def main(args=None):
    rclpy.init(args=args)
    array_subscriber = ArraySubscriber()
    rclpy.spin(array_subscriber)
    array_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

