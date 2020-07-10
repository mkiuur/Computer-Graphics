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
CMAKE_SOURCE_DIR = /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes/build

# Include any dependencies generated for this target.
include CMakeFiles/quad_subdivision.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/quad_subdivision.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/quad_subdivision.dir/flags.make

CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.o: CMakeFiles/quad_subdivision.dir/flags.make
CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.o: ../quad_subdivision.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes/quad_subdivision.cpp

CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes/quad_subdivision.cpp > CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.i

CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes/quad_subdivision.cpp -o CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.s

# Object files for target quad_subdivision
quad_subdivision_OBJECTS = \
"CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.o"

# External object files for target quad_subdivision
quad_subdivision_EXTERNAL_OBJECTS =

quad_subdivision: CMakeFiles/quad_subdivision.dir/quad_subdivision.cpp.o
quad_subdivision: CMakeFiles/quad_subdivision.dir/build.make
quad_subdivision: libcore.a
quad_subdivision: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.15.sdk/System/Library/Frameworks/OpenGL.framework/OpenGL.tbd
quad_subdivision: glad/libglad.a
quad_subdivision: glfw/src/libglfw3.a
quad_subdivision: CMakeFiles/quad_subdivision.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable quad_subdivision"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/quad_subdivision.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/quad_subdivision.dir/build: quad_subdivision

.PHONY : CMakeFiles/quad_subdivision.dir/build

CMakeFiles/quad_subdivision.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/quad_subdivision.dir/cmake_clean.cmake
.PHONY : CMakeFiles/quad_subdivision.dir/clean

CMakeFiles/quad_subdivision.dir/depend:
	cd /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes/build /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes/build /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/meshes/build/CMakeFiles/quad_subdivision.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/quad_subdivision.dir/depend

