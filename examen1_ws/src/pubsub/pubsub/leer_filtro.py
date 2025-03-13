import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

class FilterSubscriber(Node):
    def __init__(self):
        super().__init__('filtered_subscriber')
        
        # Suscribirse al tópico /filtered_sensor
        self.subscription = self.create_subscription(
            Float32, '/filtered_sensor', self.listener_callback, 10)
        self.subscription  # Evita advertencias de variable no utilizada
        
    def listener_callback(self, msg):
        self.get_logger().info(f'Valor filtrado recibido: {msg.data:.2f}')


def main():
    rclpy.init()
    
    subscriber = FilterSubscriber()
    
    try:
        rclpy.spin(subscriber)
    except KeyboardInterrupt:
        pass
    finally:
        subscriber.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

