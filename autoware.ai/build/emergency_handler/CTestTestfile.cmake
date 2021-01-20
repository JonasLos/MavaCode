# CMake generated Testfile for 
# Source directory: /home/capstone/autoware.ai/src/autoware/common/emergency_handler
# Build directory: /home/capstone/autoware.ai/build/emergency_handler
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_emergency_handler_roslint_package "/home/capstone/autoware.ai/build/emergency_handler/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/capstone/autoware.ai/build/emergency_handler/test_results/emergency_handler/roslint-emergency_handler.xml" "--working-dir" "/home/capstone/autoware.ai/build/emergency_handler" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/capstone/autoware.ai/build/emergency_handler/test_results/emergency_handler/roslint-emergency_handler.xml make roslint_emergency_handler")
add_test(_ctest_emergency_handler_rostest_test_test_emergency_handler.test "/home/capstone/autoware.ai/build/emergency_handler/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/capstone/autoware.ai/build/emergency_handler/test_results/emergency_handler/rostest-test_test_emergency_handler.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/capstone/autoware.ai/src/autoware/common/emergency_handler --package=emergency_handler --results-filename test_test_emergency_handler.xml --results-base-dir \"/home/capstone/autoware.ai/build/emergency_handler/test_results\" /home/capstone/autoware.ai/src/autoware/common/emergency_handler/test/test_emergency_handler.test ")
subdirs("gtest")
