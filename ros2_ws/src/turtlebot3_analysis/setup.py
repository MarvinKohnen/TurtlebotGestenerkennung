from setuptools import find_packages, setup

package_name = 'turtlebot3_analysis'

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
    maintainer='marvin',
    maintainer_email='kohnen.marvin@googlemail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'heatmap_generator = turtlebot3_analysis.heatmap_generator:main',
            'position_logger = turtlebot3_analysis.position_logger:main',
            'get_latest_map_client = turtlebot3_analysis.get_latest_map_client:main',
        ],
    },
)
