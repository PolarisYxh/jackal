#Jackal's kinect package
before roslaunch iqr_4b_bringup iqr_bringup.launch,have to open all the devices such as kinova
roslaunch iqr_4b_moveit_config iqr_4b_moveit_execute.launch//manipulate kinova arm
roslaunch iqr_4b_navigation gmapping.launch//open navigation algorithm
