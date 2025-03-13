import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

class FilterNode(Node):
    def __init__(self):
        super().__init__('filtro_node')
        
        # Crear un publicador en /filtered_sensor con Float32
        self.publisher_ = self.create_publisher(Float32, '/filtered_sensor', 10)
        
        # Crear suscriptores a los sensores
        self.subscription1 = self.create_subscription(Float32, '/sensor_1', self.sensor1_callback, 10)
        self.subscription2 = self.create_subscription(Float32, '/sensor_2', self.sensor2_callback, 10)
        self.subscription3 = self.create_subscription(Float32, '/sensor_3', self.sensor3_callback, 10)

        # Variables para almacenar valores
        self.values = {'sensor_1': None, 'sensor_2': None, 'sensor_3': None}
    
    def sensor1_callback(self, msg):
        self.values['sensor_1'] = msg.data
        self.calculate_and_publish()
    
    def sensor2_callback(self, msg):
        self.values['sensor_2'] = msg.data
        self.calculate_and_publish()
    
    def sensor3_callback(self, msg):
        self.values['sensor_3'] = msg.data
        self.calculate_and_publish()
    
    def calculate_and_publish(self):
        if None not in self.values.values():  # Asegura que todos los sensores enviaron datos
            avg = sum(self.values.values()) / 3
            filtered_msg = Float32()
            filtered_msg.data = avg
            self.publisher_.publish(filtered_msg)
            self.get_logger().info(f'Promedio publicado: {avg:.2f}')


def main():
    rclpy.init()
    
    filtro = FilterNode()
    
    executor = rclpy.executors.SingleThreadedExecutor()
    executor.add_node(filtro)
    
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        filtro.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

