# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jacob/code/advent_of_code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jacob/code/advent_of_code

# Utility rule file for ExperimentalMemCheck.

# Include any custom commands dependencies for this target.
include 1/c++/tests/CMakeFiles/ExperimentalMemCheck.dir/compiler_depend.make

# Include the progress variables for this target.
include 1/c++/tests/CMakeFiles/ExperimentalMemCheck.dir/progress.make

1/c++/tests/CMakeFiles/ExperimentalMemCheck:
	cd /home/jacob/code/advent_of_code/1/c++/tests && /usr/bin/ctest -D ExperimentalMemCheck

ExperimentalMemCheck: 1/c++/tests/CMakeFiles/ExperimentalMemCheck
ExperimentalMemCheck: 1/c++/tests/CMakeFiles/ExperimentalMemCheck.dir/build.make
.PHONY : ExperimentalMemCheck

# Rule to build all files generated by this target.
1/c++/tests/CMakeFiles/ExperimentalMemCheck.dir/build: ExperimentalMemCheck
.PHONY : 1/c++/tests/CMakeFiles/ExperimentalMemCheck.dir/build

1/c++/tests/CMakeFiles/ExperimentalMemCheck.dir/clean:
	cd /home/jacob/code/advent_of_code/1/c++/tests && $(CMAKE_COMMAND) -P CMakeFiles/ExperimentalMemCheck.dir/cmake_clean.cmake
.PHONY : 1/c++/tests/CMakeFiles/ExperimentalMemCheck.dir/clean

1/c++/tests/CMakeFiles/ExperimentalMemCheck.dir/depend:
	cd /home/jacob/code/advent_of_code && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jacob/code/advent_of_code /home/jacob/code/advent_of_code/1/c++/tests /home/jacob/code/advent_of_code /home/jacob/code/advent_of_code/1/c++/tests /home/jacob/code/advent_of_code/1/c++/tests/CMakeFiles/ExperimentalMemCheck.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : 1/c++/tests/CMakeFiles/ExperimentalMemCheck.dir/depend

