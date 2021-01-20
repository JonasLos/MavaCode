# CMake generated Testfile for 
# Source directory: /home/capstone/autoware.ai/src/autoware/core_planning/astar_search
# Build directory: /home/capstone/autoware.ai/build/astar_search
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_astar_search_rostest_test_test_astar_search.test "/home/capstone/autoware.ai/build/astar_search/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/capstone/autoware.ai/build/astar_search/test_results/astar_search/rostest-test_test_astar_search.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/capstone/autoware.ai/src/autoware/core_planning/astar_search --package=astar_search --results-filename test_test_astar_search.xml --results-base-dir \"/home/capstone/autoware.ai/build/astar_search/test_results\" /home/capstone/autoware.ai/src/autoware/core_planning/astar_search/test/test_astar_search.test ")
subdirs("gtest")
