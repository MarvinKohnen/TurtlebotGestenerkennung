from setuptools import find_packages, setup

package_name = 'turtlebot3_random_explorer'

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
            'random_explorer = turtlebot3_random_explorer.random_explorer:main',
            'simple_mover = turtlebot3_random_explorer.simple_mover:main',
                            ],

    },
)
