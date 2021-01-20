# -*- coding: utf-8 -*-
from __future__ import print_function

import os
import stat
import sys

# find the import for catkin's python package - either from source space or from an installed underlay
if os.path.exists(os.path.join('/opt/ros/melodic/share/catkin/cmake', 'catkinConfig.cmake.in')):
    sys.path.insert(0, os.path.join('/opt/ros/melodic/share/catkin/cmake', '..', 'python'))
try:
    from catkin.environment_cache import generate_environment_script
except ImportError:
    # search for catkin package in all workspaces and prepend to path
    for workspace in '/home/capstone/autoware.ai/install/autoware_can_msgs;/home/capstone/autoware.ai/install/vehicle_sim_model;/home/capstone/autoware.ai/install/vehicle_gazebo_simulation_launcher;/home/capstone/autoware.ai/install/vehicle_description;/home/capstone/autoware.ai/install/vector_map_server;/home/capstone/autoware.ai/install/libvectormap;/home/capstone/autoware.ai/install/vector_map;/home/capstone/autoware.ai/install/vector_map_msgs;/home/capstone/autoware.ai/install/twist2odom;/home/capstone/autoware.ai/install/tablet_socket_msgs;/home/capstone/autoware.ai/install/sound_player;/home/capstone/autoware.ai/install/rosinterface;/home/capstone/autoware.ai/install/rosbag_controller;/home/capstone/autoware.ai/install/autoware_health_checker;/home/capstone/autoware.ai/install/ros_observer;/home/capstone/autoware.ai/install/pcl_omp_registration;/home/capstone/autoware.ai/install/pc2_downsampler;/home/capstone/autoware.ai/install/nmea_navsat;/home/capstone/autoware.ai/install/ndt_tku;/home/capstone/autoware.ai/install/ndt_gpu;/home/capstone/autoware.ai/install/ndt_cpu;/home/capstone/autoware.ai/install/mrt_cmake_modules;/home/capstone/autoware.ai/install/marker_downsampler;/home/capstone/autoware.ai/install/graph_tools;/home/capstone/autoware.ai/install/gnss;/home/capstone/autoware.ai/install/glviewer;/home/capstone/autoware.ai/install/gazebo_world_description;/home/capstone/autoware.ai/install/gazebo_imu_description;/home/capstone/autoware.ai/install/gazebo_camera_description;/home/capstone/autoware.ai/install/fastvirtualscan;/home/capstone/autoware.ai/install/decision_maker_panel;/home/capstone/autoware.ai/install/carla_autoware_bridge;/home/capstone/autoware.ai/install/calibration_publisher;/home/capstone/autoware.ai/install/autoware_system_msgs;/home/capstone/autoware.ai/install/autoware_rviz_plugins;/home/capstone/autoware.ai/install/autoware_quickstart_examples;/home/capstone/autoware.ai/install/autoware_pointgrey_drivers;/home/capstone/autoware.ai/install/autoware_driveworks_interface;/home/capstone/autoware.ai/install/autoware_connector;/home/capstone/autoware.ai/install/autoware_camera_lidar_calibrator;/home/capstone/autoware.ai/install/amathutils_lib;/home/capstone/autoware.ai/install/autoware_msgs;/home/capstone/autoware.ai/install/autoware_map_msgs;/home/capstone/autoware.ai/install/autoware_launcher_rviz;/home/capstone/autoware.ai/install/autoware_launcher;/home/capstone/autoware.ai/install/autoware_lanelet2_msgs;/home/capstone/autoware.ai/install/autoware_external_msgs;/home/capstone/autoware.ai/install/autoware_driveworks_gmsl_interface;/home/capstone/autoware.ai/install/autoware_config_msgs;/home/capstone/autoware.ai/install/autoware_build_flags;/home/capstone/autoware.ai/install/autoware_bag_tools;/opt/carla-ros-bridge/melodic;/opt/ros/melodic'.split(';'):
        python_path = os.path.join(workspace, 'lib/python2.7/dist-packages')
        if os.path.isdir(os.path.join(python_path, 'catkin')):
            sys.path.insert(0, python_path)
            break
    from catkin.environment_cache import generate_environment_script

code = generate_environment_script('/home/capstone/autoware.ai/build/kvaser/devel/env.sh')

output_filename = '/home/capstone/autoware.ai/build/kvaser/catkin_generated/setup_cached.sh'
with open(output_filename, 'w') as f:
    # print('Generate script for cached setup "%s"' % output_filename)
    f.write('\n'.join(code))

mode = os.stat(output_filename).st_mode
os.chmod(output_filename, mode | stat.S_IXUSR)
