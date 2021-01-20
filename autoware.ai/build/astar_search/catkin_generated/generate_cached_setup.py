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
    for workspace in '/home/capstone/autoware.ai/install/autoware_msgs;/home/capstone/autoware.ai/install/autoware_build_flags;/home/capstone/autoware.ai/install/ymc;/home/capstone/autoware.ai/install/xsens_driver;/home/capstone/autoware.ai/install/wf_simulator;/home/capstone/autoware.ai/install/lattice_planner;/home/capstone/autoware.ai/install/waypoint_planner;/home/capstone/autoware.ai/install/waypoint_maker;/home/capstone/autoware.ai/install/way_planner;/home/capstone/autoware.ai/install/vlg22c_cam;/home/capstone/autoware.ai/install/vision_ssd_detect;/home/capstone/autoware.ai/install/vision_segment_enet_detect;/home/capstone/autoware.ai/install/vision_lane_detect;/home/capstone/autoware.ai/install/vision_darknet_detect;/home/capstone/autoware.ai/install/vision_beyond_track;/home/capstone/autoware.ai/install/vel_pose_diff_checker;/home/capstone/autoware.ai/install/vehicle_socket;/home/capstone/autoware.ai/install/vehicle_sim_model;/home/capstone/autoware.ai/install/vehicle_model;/home/capstone/autoware.ai/install/vehicle_gazebo_simulation_launcher;/home/capstone/autoware.ai/install/vehicle_gazebo_simulation_interface;/home/capstone/autoware.ai/install/vehicle_engage_panel;/home/capstone/autoware.ai/install/vehicle_description;/home/capstone/autoware.ai/install/trafficlight_recognizer;/home/capstone/autoware.ai/install/op_utilities;/home/capstone/autoware.ai/install/op_simulation_package;/home/capstone/autoware.ai/install/op_local_planner;/home/capstone/autoware.ai/install/op_global_planner;/home/capstone/autoware.ai/install/lidar_kf_contour_track;/home/capstone/autoware.ai/install/op_ros_helpers;/home/capstone/autoware.ai/install/ff_waypoint_follower;/home/capstone/autoware.ai/install/dp_planner;/home/capstone/autoware.ai/install/op_simu;/home/capstone/autoware.ai/install/op_planner;/home/capstone/autoware.ai/install/op_utility;/home/capstone/autoware.ai/install/lidar_euclidean_cluster_detect;/home/capstone/autoware.ai/install/vector_map_server;/home/capstone/autoware.ai/install/road_occupancy_processor;/home/capstone/autoware.ai/install/costmap_generator;/home/capstone/autoware.ai/install/object_map;/home/capstone/autoware.ai/install/naive_motion_predict;/home/capstone/autoware.ai/install/lanelet_aisan_converter;/home/capstone/autoware.ai/install/map_file;/home/capstone/autoware.ai/install/libvectormap;/home/capstone/autoware.ai/install/lane_planner;/home/capstone/autoware.ai/install/imm_ukf_pda_track;/home/capstone/autoware.ai/install/decision_maker;/home/capstone/autoware.ai/install/vector_map;/home/capstone/autoware.ai/install/vector_map_msgs;/home/capstone/autoware.ai/install/vectacam;/home/capstone/autoware.ai/install/udon_socket;/home/capstone/autoware.ai/install/twist_generator;/home/capstone/autoware.ai/install/twist_gate;/home/capstone/autoware.ai/install/twist_filter;/home/capstone/autoware.ai/install/twist2odom;/home/capstone/autoware.ai/install/tablet_socket;/home/capstone/autoware.ai/install/runtime_manager;/home/capstone/autoware.ai/install/mqtt_socket;/home/capstone/autoware.ai/install/tablet_socket_msgs;/home/capstone/autoware.ai/install/state_machine_lib;/home/capstone/autoware.ai/install/sound_player;/home/capstone/autoware.ai/install/sick_lms5xx;/home/capstone/autoware.ai/install/sick_ldmrs_tools;/home/capstone/autoware.ai/install/sick_ldmrs_driver;/home/capstone/autoware.ai/install/sick_ldmrs_msgs;/home/capstone/autoware.ai/install/sick_ldmrs_description;/home/capstone/autoware.ai/install/points2image;/home/capstone/autoware.ai/install/rosinterface;/home/capstone/autoware.ai/install/rosbag_controller;/home/capstone/autoware.ai/install/pure_pursuit;/home/capstone/autoware.ai/install/points_preprocessor;/home/capstone/autoware.ai/install/mpc_follower;/home/capstone/autoware.ai/install/lidar_localizer;/home/capstone/autoware.ai/install/emergency_handler;/home/capstone/autoware.ai/install/autoware_health_checker;/home/capstone/autoware.ai/install/as;/home/capstone/autoware.ai/install/ros_observer;/home/capstone/autoware.ai/install/roi_object_filter;/home/capstone/autoware.ai/install/range_vision_fusion;/home/capstone/autoware.ai/install/pos_db;/home/capstone/autoware.ai/install/points_downsampler;/home/capstone/autoware.ai/install/pixel_cloud_fusion;/home/capstone/autoware.ai/install/pcl_omp_registration;/home/capstone/autoware.ai/install/pc2_downsampler;/home/capstone/autoware.ai/install/oculus_socket;/home/capstone/autoware.ai/install/obj_db;/home/capstone/autoware.ai/install/nmea_navsat;/home/capstone/autoware.ai/install/ndt_tku;/home/capstone/autoware.ai/install/ndt_gpu;/home/capstone/autoware.ai/install/ndt_cpu;/home/capstone/autoware.ai/install/multi_lidar_calibrator;/home/capstone/autoware.ai/install/mrt_cmake_modules;/home/capstone/autoware.ai/install/microstrain_driver;/home/capstone/autoware.ai/install/memsic_imu;/home/capstone/autoware.ai/install/marker_downsampler;/home/capstone/autoware.ai/install/map_tools;/home/capstone/autoware.ai/install/map_tf_generator;/home/capstone/autoware.ai/install/log_tools;/home/capstone/autoware.ai/install/lidar_shape_estimation;/home/capstone/autoware.ai/install/lidar_point_pillars;/home/capstone/autoware.ai/install/lidar_naive_l_shape_detect;/home/capstone/autoware.ai/install/lidar_fake_perception;/home/capstone/autoware.ai/install/lidar_apollo_cnn_seg_detect;/home/capstone/autoware.ai/install/libwaypoint_follower;/home/capstone/autoware.ai/install/lgsvl_simulator_bridge;/home/capstone/autoware.ai/install/lanelet2_extension;/home/capstone/autoware.ai/install/lanelet2_validation;/home/capstone/autoware.ai/install/lanelet2_examples;/home/capstone/autoware.ai/install/lanelet2_python;/home/capstone/autoware.ai/install/lanelet2_routing;/home/capstone/autoware.ai/install/lanelet2_traffic_rules;/home/capstone/autoware.ai/install/lanelet2_projection;/home/capstone/autoware.ai/install/lanelet2_maps;/home/capstone/autoware.ai/install/lanelet2_io;/home/capstone/autoware.ai/install/lanelet2_core;/home/capstone/autoware.ai/install/kvaser;/home/capstone/autoware.ai/install/kitti_launch;/home/capstone/autoware.ai/install/kitti_player;/home/capstone/autoware.ai/install/kitti_box_publisher;/home/capstone/autoware.ai/install/javad_navsat_driver;/home/capstone/autoware.ai/install/integrated_viewer;/home/capstone/autoware.ai/install/image_processor;/home/capstone/autoware.ai/install/hokuyo;/home/capstone/autoware.ai/install/graph_tools;/home/capstone/autoware.ai/install/gnss_localizer;/home/capstone/autoware.ai/install/gnss;/home/capstone/autoware.ai/install/glviewer;/home/capstone/autoware.ai/install/gazebo_world_description;/home/capstone/autoware.ai/install/gazebo_imu_description;/home/capstone/autoware.ai/install/gazebo_camera_description;/home/capstone/autoware.ai/install/garmin;/home/capstone/autoware.ai/install/freespace_planner;/home/capstone/autoware.ai/install/fastvirtualscan;/home/capstone/autoware.ai/install/ekf_localizer;/home/capstone/autoware.ai/install/ds4_msgs;/home/capstone/autoware.ai/install/ds4_driver;/home/capstone/autoware.ai/install/detected_objects_visualizer;/home/capstone/autoware.ai/install/decision_maker_panel;/home/capstone/autoware.ai/install/data_preprocessor;/home/capstone/autoware.ai/install/custom_msgs;/home/capstone/autoware.ai/install/carla_autoware_bridge;/home/capstone/autoware.ai/install/calibration_publisher;/home/capstone/autoware.ai/install/autoware_system_msgs;/home/capstone/autoware.ai/install/autoware_rviz_plugins;/home/capstone/autoware.ai/install/autoware_quickstart_examples;/home/capstone/autoware.ai/install/autoware_pointgrey_drivers;/home/capstone/autoware.ai/install/autoware_driveworks_interface;/home/capstone/autoware.ai/install/autoware_connector;/home/capstone/autoware.ai/install/autoware_camera_lidar_calibrator;/home/capstone/autoware.ai/install/astar_search;/home/capstone/autoware.ai/install/amathutils_lib;/home/capstone/autoware.ai/install/autoware_map_msgs;/home/capstone/autoware.ai/install/autoware_launcher_rviz;/home/capstone/autoware.ai/install/autoware_launcher;/home/capstone/autoware.ai/install/autoware_lanelet2_msgs;/home/capstone/autoware.ai/install/autoware_external_msgs;/home/capstone/autoware.ai/install/autoware_driveworks_gmsl_interface;/home/capstone/autoware.ai/install/autoware_config_msgs;/home/capstone/autoware.ai/install/autoware_can_msgs;/home/capstone/autoware.ai/install/autoware_bag_tools;/home/capstone/autoware.ai/install/adi_driver;/opt/carla-ros-bridge/melodic;/opt/ros/melodic'.split(';'):
        python_path = os.path.join(workspace, 'lib/python2.7/dist-packages')
        if os.path.isdir(os.path.join(python_path, 'catkin')):
            sys.path.insert(0, python_path)
            break
    from catkin.environment_cache import generate_environment_script

code = generate_environment_script('/home/capstone/autoware.ai/build/astar_search/devel/env.sh')

output_filename = '/home/capstone/autoware.ai/build/astar_search/catkin_generated/setup_cached.sh'
with open(output_filename, 'w') as f:
    # print('Generate script for cached setup "%s"' % output_filename)
    f.write('\n'.join(code))

mode = os.stat(output_filename).st_mode
os.chmod(output_filename, mode | stat.S_IXUSR)
