# igt_100

```
roslaunch igt_one_description gazebo.launch
```

This robot has a lidar and realsense d435 depth camera.
The plugins are already added so you can see the lidar data as well as depth data.


You can try moving the robot using
```
rosrun teleop_twist_keyboard teleop_twist_keyboard.py 
```

You need to setup a navigation stack(mapping,localization,autonomous navigation including obstacle avoidance) on this robot so that if you give it a 2D nav goal in rviz, it should be able to go there avoiding obstacles. You need to integrate the depth camera as well as lidar for obstacle avoidance. You can put the robot in any environment you want for testing.

There are no constraints. You can modify any files as you need.


