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

# Include any dependencies generated for this target.
include Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/compiler_depend.make

# Include the progress variables for this target.
include Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/progress.make

# Include the compile flags for this target's objects.
include Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/flags.make

Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.o: Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/flags.make
Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.o: Day2/c++/tests/tests_main.cpp
Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.o: Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jacob/code/advent_of_code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.o"
	cd /home/jacob/code/advent_of_code/Day2/c++/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.o -MF CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.o.d -o CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.o -c /home/jacob/code/advent_of_code/Day2/c++/tests/tests_main.cpp

Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.i"
	cd /home/jacob/code/advent_of_code/Day2/c++/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacob/code/advent_of_code/Day2/c++/tests/tests_main.cpp > CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.i

Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.s"
	cd /home/jacob/code/advent_of_code/Day2/c++/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacob/code/advent_of_code/Day2/c++/tests/tests_main.cpp -o CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.s

Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.o: Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/flags.make
Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.o: Day2/c++/tests/tests.cpp
Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.o: Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jacob/code/advent_of_code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.o"
	cd /home/jacob/code/advent_of_code/Day2/c++/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.o -MF CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.o.d -o CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.o -c /home/jacob/code/advent_of_code/Day2/c++/tests/tests.cpp

Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.i"
	cd /home/jacob/code/advent_of_code/Day2/c++/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jacob/code/advent_of_code/Day2/c++/tests/tests.cpp > CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.i

Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.s"
	cd /home/jacob/code/advent_of_code/Day2/c++/tests && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jacob/code/advent_of_code/Day2/c++/tests/tests.cpp -o CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.s

# Object files for target adventcode2_tests.exe
adventcode2_tests_exe_OBJECTS = \
"CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.o" \
"CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.o"

# External object files for target adventcode2_tests.exe
adventcode2_tests_exe_EXTERNAL_OBJECTS =

Day2/c++/tests/adventcode2_tests.exe: Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests_main.cpp.o
Day2/c++/tests/adventcode2_tests.exe: Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/tests.cpp.o
Day2/c++/tests/adventcode2_tests.exe: Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/build.make
Day2/c++/tests/adventcode2_tests.exe: Day2/c++/src/functions.cpp
Day2/c++/tests/adventcode2_tests.exe: lib/libgtest_main.a
Day2/c++/tests/adventcode2_tests.exe: lib/libgmock_main.a
Day2/c++/tests/adventcode2_tests.exe: lib/libgmock.a
Day2/c++/tests/adventcode2_tests.exe: lib/libgtest.a
Day2/c++/tests/adventcode2_tests.exe: Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jacob/code/advent_of_code/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable adventcode2_tests.exe"
	cd /home/jacob/code/advent_of_code/Day2/c++/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/adventcode2_tests.exe.dir/link.txt --verbose=$(VERBOSE)
	cd /home/jacob/code/advent_of_code/Day2/c++/tests && /usr/bin/cmake -D TEST_TARGET=adventcode2_tests.exe -D TEST_EXECUTABLE=/home/jacob/code/advent_of_code/Day2/c++/tests/adventcode2_tests.exe -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/jacob/code/advent_of_code/Day2/c++/tests -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=adventcode2_tests.exe_TESTS -D CTEST_FILE=/home/jacob/code/advent_of_code/Day2/c++/tests/adventcode2_tests.exe[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/build: Day2/c++/tests/adventcode2_tests.exe
.PHONY : Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/build

Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/clean:
	cd /home/jacob/code/advent_of_code/Day2/c++/tests && $(CMAKE_COMMAND) -P CMakeFiles/adventcode2_tests.exe.dir/cmake_clean.cmake
.PHONY : Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/clean

Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/depend:
	cd /home/jacob/code/advent_of_code && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jacob/code/advent_of_code /home/jacob/code/advent_of_code/Day2/c++/tests /home/jacob/code/advent_of_code /home/jacob/code/advent_of_code/Day2/c++/tests /home/jacob/code/advent_of_code/Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Day2/c++/tests/CMakeFiles/adventcode2_tests.exe.dir/depend
