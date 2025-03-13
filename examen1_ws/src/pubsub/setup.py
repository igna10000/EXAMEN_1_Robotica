from setuptools import find_packages, setup

package_name = 'pubsub'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='root@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'pub=pubsub.pub_array:main',
        'sub=pubsub.sub_array:main',
        'sensores=pubsub.sensores:main',
        'filtro=pubsub.filtro:main',
        'leer=pubsub.leer_filtro:main'
        ],
    },
)
