# CMake generated Testfile for 
# Source directory: /home/capstone/autoware.ai/src/autoware/common/op_utility
# Build directory: /home/capstone/autoware.ai/build/op_utility
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_op_utility_rostest_test_test_op_utility.test "/home/capstone/autoware.ai/build/op_utility/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/capstone/autoware.ai/build/op_utility/test_results/op_utility/rostest-test_test_op_utility.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/capstone/autoware.ai/src/autoware/common/op_utility --package=op_utility --results-filename test_test_op_utility.xml --results-base-dir \"/home/capstone/autoware.ai/build/op_utility/test_results\" /home/capstone/autoware.ai/src/autoware/common/op_utility/test/test_op_utility.test ")
subdirs("gtest")
