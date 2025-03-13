import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import time
import threading

class SensorNode(Node):
    def __init__(self, node_name, topic_name):
        super().__init__(node_name)
        self.publisher_ = self.create_publisher(Float32, topic_name, 10)
        self.timer = self.create_timer(1.0, self.publish_sensor_data)  # Publica cada segundo
        self.value = 0.0  # Inicia en 0.0
        self.increment = 0.5
        self.max_value = 10.0
        self.get_logger().info(f'{node_name} publicando en {topic_name}')

    def publish_sensor_data(self):
        msg = Float32()
        msg.data = self.value
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publicando: {msg.data} en {self.get_name()}')
        self.value += self.increment
        if self.value > self.max_value:
            self.value = 0.0  # Reiniciar a 0


def main():
    rclpy.init()
    
    sensor1 = SensorNode('sensor_node_1', '/sensor_1')
    sensor2 = SensorNode('sensor_node_2', '/sensor_2')
    sensor3 = SensorNode('sensor_node_3', '/sensor_3')
    
    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(sensor1)
    executor.add_node(sensor2)
    executor.add_node(sensor3)
    
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        sensor1.destroy_node()
        sensor2.destroy_node()
        sensor3.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

