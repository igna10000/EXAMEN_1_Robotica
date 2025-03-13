import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray


class ArrayPublisher(Node):
    def __init__(self):
        #Configuracion del nodo
        super().__init__('Nodo1Publicador')# nombre del nodo
        self.publisher_ = self.create_publisher(Float64MultiArray, 'array_topic', 10) # Nombre del del topico y tipo de dato
        timer_period = 3  # segundos
        self.timer = self.create_timer(timer_period, self.timer_callback)
        ###########################
        
        
        ##tus variable de tu codigo
        self.i = 0
        ##########################
        
    #################################################
    
    #SI NECESITAS FUNCIONES LAS CREAS ACA.
    
    ###################################################
    def timer_callback(self):
        ##### crear el mensaje
        msg = Float64MultiArray() # en este caso es de tipo array >En este la variable del mensaje es msg
        
        
        
        #######TU CODIGO###
        
        
        binary_str = bin(self.i)[2:] #0
        binary_str = binary_str.zfill(3)#000
        bit_array = [float(int(bit)) for bit in binary_str]
        msg.data = bit_array
        
        '''
        if self.i==7:
            self.i=0
        '''
        
        ####################
        
        #Publicar el mensaje
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publicando: {msg.data}') #como un print
        #################################################
        
        #mas de tu codigo si lo requiere 
        self.i=self.i+1
        if self.i==8:
            self.i=0




def main(args=None):
    rclpy.init(args=args)
    array_publisher = ArrayPublisher()##INICIALIZAMOS EL NODO PUBLICADOR
    
    rclpy.spin(array_publisher)## SE REFRESQUE CADA 3 SEGUNDOS EN ESTE CASO
    
    array_publisher.destroy_node() #Si es que hay algun error el nodo de destruye. Tambien cuando hacemos un ctrl + C .
    rclpy.shutdown() #Todo se detiene cuando lo anterior se cumple




if __name__ == '__main__':
    main()


