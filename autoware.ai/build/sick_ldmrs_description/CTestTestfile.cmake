# CMake generated Testfile for 
# Source directory: /home/capstone/autoware.ai/src/drivers/awf_drivers/sick_ldmrs_description
# Build directory: /home/capstone/autoware.ai/build/sick_ldmrs_description
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_sick_ldmrs_description_roslaunch-check_launch "/home/capstone/autoware.ai/build/sick_ldmrs_description/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/capstone/autoware.ai/build/sick_ldmrs_description/test_results/sick_ldmrs_description/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/capstone/autoware.ai/build/sick_ldmrs_description/test_results/sick_ldmrs_description" "/opt/ros/melodic/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/home/capstone/autoware.ai/build/sick_ldmrs_description/test_results/sick_ldmrs_description/roslaunch-check_launch.xml\" \"/home/capstone/autoware.ai/src/drivers/awf_drivers/sick_ldmrs_description/launch\" ")
subdirs("gtest")
