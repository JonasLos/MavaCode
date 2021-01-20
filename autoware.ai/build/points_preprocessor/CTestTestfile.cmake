# CMake generated Testfile for 
# Source directory: /home/capstone/autoware.ai/src/autoware/core_perception/points_preprocessor
# Build directory: /home/capstone/autoware.ai/build/points_preprocessor
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_points_preprocessor_roslint_package "/home/capstone/autoware.ai/build/points_preprocessor/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/capstone/autoware.ai/build/points_preprocessor/test_results/points_preprocessor/roslint-points_preprocessor.xml" "--working-dir" "/home/capstone/autoware.ai/build/points_preprocessor" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/capstone/autoware.ai/build/points_preprocessor/test_results/points_preprocessor/roslint-points_preprocessor.xml make roslint_points_preprocessor")
subdirs("gtest")
