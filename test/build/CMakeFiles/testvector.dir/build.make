# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = "/home/firgla/codes c++/vector/test"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/firgla/codes c++/vector/test/build"

# Include any dependencies generated for this target.
include CMakeFiles/testvector.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/testvector.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/testvector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testvector.dir/flags.make

CMakeFiles/testvector.dir/main.cpp.o: CMakeFiles/testvector.dir/flags.make
CMakeFiles/testvector.dir/main.cpp.o: ../main.cpp
CMakeFiles/testvector.dir/main.cpp.o: CMakeFiles/testvector.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/firgla/codes c++/vector/test/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testvector.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/testvector.dir/main.cpp.o -MF CMakeFiles/testvector.dir/main.cpp.o.d -o CMakeFiles/testvector.dir/main.cpp.o -c "/home/firgla/codes c++/vector/test/main.cpp"

CMakeFiles/testvector.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testvector.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/firgla/codes c++/vector/test/main.cpp" > CMakeFiles/testvector.dir/main.cpp.i

CMakeFiles/testvector.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testvector.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/firgla/codes c++/vector/test/main.cpp" -o CMakeFiles/testvector.dir/main.cpp.s

# Object files for target testvector
testvector_OBJECTS = \
"CMakeFiles/testvector.dir/main.cpp.o"

# External object files for target testvector
testvector_EXTERNAL_OBJECTS =

testvector: CMakeFiles/testvector.dir/main.cpp.o
testvector: CMakeFiles/testvector.dir/build.make
testvector: /usr/lib/x86_64-linux-gnu/libgtest.a
testvector: CMakeFiles/testvector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/firgla/codes c++/vector/test/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testvector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testvector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testvector.dir/build: testvector
.PHONY : CMakeFiles/testvector.dir/build

CMakeFiles/testvector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testvector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testvector.dir/clean

CMakeFiles/testvector.dir/depend:
	cd "/home/firgla/codes c++/vector/test/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/firgla/codes c++/vector/test" "/home/firgla/codes c++/vector/test" "/home/firgla/codes c++/vector/test/build" "/home/firgla/codes c++/vector/test/build" "/home/firgla/codes c++/vector/test/build/CMakeFiles/testvector.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/testvector.dir/depend

