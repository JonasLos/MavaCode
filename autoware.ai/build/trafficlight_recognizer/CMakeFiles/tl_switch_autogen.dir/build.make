# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/capstone/autoware.ai/src/autoware/core_perception/trafficlight_recognizer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/capstone/autoware.ai/build/trafficlight_recognizer

# Utility rule file for tl_switch_autogen.

# Include the progress variables for this target.
include CMakeFiles/tl_switch_autogen.dir/progress.make

CMakeFiles/tl_switch_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/capstone/autoware.ai/build/trafficlight_recognizer/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC, UIC and RCC for target tl_switch"
	/usr/bin/cmake -E cmake_autogen /home/capstone/autoware.ai/build/trafficlight_recognizer/CMakeFiles/tl_switch_autogen.dir Release

tl_switch_autogen: CMakeFiles/tl_switch_autogen
tl_switch_autogen: CMakeFiles/tl_switch_autogen.dir/build.make

.PHONY : tl_switch_autogen

# Rule to build all files generated by this target.
CMakeFiles/tl_switch_autogen.dir/build: tl_switch_autogen

.PHONY : CMakeFiles/tl_switch_autogen.dir/build

CMakeFiles/tl_switch_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tl_switch_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tl_switch_autogen.dir/clean

CMakeFiles/tl_switch_autogen.dir/depend:
	cd /home/capstone/autoware.ai/build/trafficlight_recognizer && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/capstone/autoware.ai/src/autoware/core_perception/trafficlight_recognizer /home/capstone/autoware.ai/src/autoware/core_perception/trafficlight_recognizer /home/capstone/autoware.ai/build/trafficlight_recognizer /home/capstone/autoware.ai/build/trafficlight_recognizer /home/capstone/autoware.ai/build/trafficlight_recognizer/CMakeFiles/tl_switch_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tl_switch_autogen.dir/depend

