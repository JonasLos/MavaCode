# CMake generated Testfile for 
# Source directory: /home/capstone/autoware.ai/src/autoware/core_planning/twist_filter
# Build directory: /home/capstone/autoware.ai/build/twist_filter
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_twist_filter_rostest_test_test_twist_filter_node.test "/home/capstone/autoware.ai/build/twist_filter/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/capstone/autoware.ai/build/twist_filter/test_results/twist_filter/rostest-test_test_twist_filter_node.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/capstone/autoware.ai/src/autoware/core_planning/twist_filter --package=twist_filter --results-filename test_test_twist_filter_node.xml --results-base-dir \"/home/capstone/autoware.ai/build/twist_filter/test_results\" /home/capstone/autoware.ai/src/autoware/core_planning/twist_filter/test/test_twist_filter_node.test ")
add_test(_ctest_twist_filter_roslint_package "/home/capstone/autoware.ai/build/twist_filter/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/capstone/autoware.ai/build/twist_filter/test_results/twist_filter/roslint-twist_filter.xml" "--working-dir" "/home/capstone/autoware.ai/build/twist_filter" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/capstone/autoware.ai/build/twist_filter/test_results/twist_filter/roslint-twist_filter.xml make roslint_twist_filter")
subdirs("gtest")
