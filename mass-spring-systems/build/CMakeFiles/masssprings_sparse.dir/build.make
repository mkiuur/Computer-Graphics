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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.17.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.17.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems/build

# Include any dependencies generated for this target.
include CMakeFiles/masssprings_sparse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/masssprings_sparse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/masssprings_sparse.dir/flags.make

CMakeFiles/masssprings_sparse.dir/main.cpp.o: CMakeFiles/masssprings_sparse.dir/flags.make
CMakeFiles/masssprings_sparse.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/masssprings_sparse.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/masssprings_sparse.dir/main.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems/main.cpp

CMakeFiles/masssprings_sparse.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/masssprings_sparse.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems/main.cpp > CMakeFiles/masssprings_sparse.dir/main.cpp.i

CMakeFiles/masssprings_sparse.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/masssprings_sparse.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems/main.cpp -o CMakeFiles/masssprings_sparse.dir/main.cpp.s

# Object files for target masssprings_sparse
masssprings_sparse_OBJECTS = \
"CMakeFiles/masssprings_sparse.dir/main.cpp.o"

# External object files for target masssprings_sparse
masssprings_sparse_EXTERNAL_OBJECTS =

masssprings_sparse: CMakeFiles/masssprings_sparse.dir/main.cpp.o
masssprings_sparse: CMakeFiles/masssprings_sparse.dir/build.make
masssprings_sparse: liblib.a
masssprings_sparse: glfw/src/libglfw3.a
masssprings_sparse: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.15.sdk/System/Library/Frameworks/OpenGL.framework/OpenGL.tbd
masssprings_sparse: glad/libglad.a
masssprings_sparse: stb_image/libigl_stb_image.a
masssprings_sparse: CMakeFiles/masssprings_sparse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable masssprings_sparse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/masssprings_sparse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/masssprings_sparse.dir/build: masssprings_sparse

.PHONY : CMakeFiles/masssprings_sparse.dir/build

CMakeFiles/masssprings_sparse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/masssprings_sparse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/masssprings_sparse.dir/clean

CMakeFiles/masssprings_sparse.dir/depend:
	cd /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems/build /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems/build /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/mass-spring-systems/build/CMakeFiles/masssprings_sparse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/masssprings_sparse.dir/depend

