# CMake generated Testfile for 
# Source directory: /home/capstone/autoware.ai/src/vendor/lanelet2/lanelet2_python
# Build directory: /home/capstone/autoware.ai/build/lanelet2_python
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_lanelet2_python_nosetests_test "/home/capstone/autoware.ai/build/lanelet2_python/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/capstone/autoware.ai/build/lanelet2_python/test_results/lanelet2_python/nosetests-test.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/capstone/autoware.ai/build/lanelet2_python/test_results/lanelet2_python" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/capstone/autoware.ai/src/vendor/lanelet2/lanelet2_python/test --with-xunit --xunit-file=/home/capstone/autoware.ai/build/lanelet2_python/test_results/lanelet2_python/nosetests-test.xml")
subdirs("gtest")
