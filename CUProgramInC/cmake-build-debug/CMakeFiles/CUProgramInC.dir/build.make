# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/siyounkim/CLionProjects/CUProgramInC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/siyounkim/CLionProjects/CUProgramInC/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CUProgramInC.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CUProgramInC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CUProgramInC.dir/flags.make

CMakeFiles/CUProgramInC.dir/main.c.o: CMakeFiles/CUProgramInC.dir/flags.make
CMakeFiles/CUProgramInC.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/siyounkim/CLionProjects/CUProgramInC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CUProgramInC.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CUProgramInC.dir/main.c.o   -c /Users/siyounkim/CLionProjects/CUProgramInC/main.c

CMakeFiles/CUProgramInC.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CUProgramInC.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/siyounkim/CLionProjects/CUProgramInC/main.c > CMakeFiles/CUProgramInC.dir/main.c.i

CMakeFiles/CUProgramInC.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CUProgramInC.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/siyounkim/CLionProjects/CUProgramInC/main.c -o CMakeFiles/CUProgramInC.dir/main.c.s

# Object files for target CUProgramInC
CUProgramInC_OBJECTS = \
"CMakeFiles/CUProgramInC.dir/main.c.o"

# External object files for target CUProgramInC
CUProgramInC_EXTERNAL_OBJECTS =

CUProgramInC: CMakeFiles/CUProgramInC.dir/main.c.o
CUProgramInC: CMakeFiles/CUProgramInC.dir/build.make
CUProgramInC: CMakeFiles/CUProgramInC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/siyounkim/CLionProjects/CUProgramInC/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CUProgramInC"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CUProgramInC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CUProgramInC.dir/build: CUProgramInC

.PHONY : CMakeFiles/CUProgramInC.dir/build

CMakeFiles/CUProgramInC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CUProgramInC.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CUProgramInC.dir/clean

CMakeFiles/CUProgramInC.dir/depend:
	cd /Users/siyounkim/CLionProjects/CUProgramInC/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/siyounkim/CLionProjects/CUProgramInC /Users/siyounkim/CLionProjects/CUProgramInC /Users/siyounkim/CLionProjects/CUProgramInC/cmake-build-debug /Users/siyounkim/CLionProjects/CUProgramInC/cmake-build-debug /Users/siyounkim/CLionProjects/CUProgramInC/cmake-build-debug/CMakeFiles/CUProgramInC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CUProgramInC.dir/depend

