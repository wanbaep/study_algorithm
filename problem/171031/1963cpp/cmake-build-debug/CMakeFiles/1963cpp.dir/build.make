# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1963cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1963cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1963cpp.dir/flags.make

CMakeFiles/1963cpp.dir/main.cpp.o: CMakeFiles/1963cpp.dir/flags.make
CMakeFiles/1963cpp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1963cpp.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1963cpp.dir/main.cpp.o -c /Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp/main.cpp

CMakeFiles/1963cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1963cpp.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp/main.cpp > CMakeFiles/1963cpp.dir/main.cpp.i

CMakeFiles/1963cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1963cpp.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp/main.cpp -o CMakeFiles/1963cpp.dir/main.cpp.s

CMakeFiles/1963cpp.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/1963cpp.dir/main.cpp.o.requires

CMakeFiles/1963cpp.dir/main.cpp.o.provides: CMakeFiles/1963cpp.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/1963cpp.dir/build.make CMakeFiles/1963cpp.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/1963cpp.dir/main.cpp.o.provides

CMakeFiles/1963cpp.dir/main.cpp.o.provides.build: CMakeFiles/1963cpp.dir/main.cpp.o


# Object files for target 1963cpp
1963cpp_OBJECTS = \
"CMakeFiles/1963cpp.dir/main.cpp.o"

# External object files for target 1963cpp
1963cpp_EXTERNAL_OBJECTS =

1963cpp: CMakeFiles/1963cpp.dir/main.cpp.o
1963cpp: CMakeFiles/1963cpp.dir/build.make
1963cpp: CMakeFiles/1963cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1963cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1963cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1963cpp.dir/build: 1963cpp

.PHONY : CMakeFiles/1963cpp.dir/build

CMakeFiles/1963cpp.dir/requires: CMakeFiles/1963cpp.dir/main.cpp.o.requires

.PHONY : CMakeFiles/1963cpp.dir/requires

CMakeFiles/1963cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1963cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1963cpp.dir/clean

CMakeFiles/1963cpp.dir/depend:
	cd /Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp /Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp /Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp/cmake-build-debug /Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp/cmake-build-debug /Users/wanbaep/Desktop/etc/study_algorithm/problem/171031/1963cpp/cmake-build-debug/CMakeFiles/1963cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1963cpp.dir/depend

