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
CMAKE_SOURCE_DIR = /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build

# Include any dependencies generated for this target.
include CMakeFiles/raster.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/raster.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/raster.dir/flags.make

CMakeFiles/raster.dir/main.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/raster.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/main.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/main.cpp

CMakeFiles/raster.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/main.cpp > CMakeFiles/raster.dir/main.cpp.i

CMakeFiles/raster.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/main.cpp -o CMakeFiles/raster.dir/main.cpp.s

CMakeFiles/raster.dir/src/demosaic.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/demosaic.cpp.o: ../src/demosaic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/raster.dir/src/demosaic.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/demosaic.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/demosaic.cpp

CMakeFiles/raster.dir/src/demosaic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/demosaic.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/demosaic.cpp > CMakeFiles/raster.dir/src/demosaic.cpp.i

CMakeFiles/raster.dir/src/demosaic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/demosaic.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/demosaic.cpp -o CMakeFiles/raster.dir/src/demosaic.cpp.s

CMakeFiles/raster.dir/src/desaturate.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/desaturate.cpp.o: ../src/desaturate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/raster.dir/src/desaturate.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/desaturate.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/desaturate.cpp

CMakeFiles/raster.dir/src/desaturate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/desaturate.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/desaturate.cpp > CMakeFiles/raster.dir/src/desaturate.cpp.i

CMakeFiles/raster.dir/src/desaturate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/desaturate.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/desaturate.cpp -o CMakeFiles/raster.dir/src/desaturate.cpp.s

CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.o: ../src/hsv_to_rgb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/hsv_to_rgb.cpp

CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/hsv_to_rgb.cpp > CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.i

CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/hsv_to_rgb.cpp -o CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.s

CMakeFiles/raster.dir/src/hue_shift.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/hue_shift.cpp.o: ../src/hue_shift.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/raster.dir/src/hue_shift.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/hue_shift.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/hue_shift.cpp

CMakeFiles/raster.dir/src/hue_shift.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/hue_shift.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/hue_shift.cpp > CMakeFiles/raster.dir/src/hue_shift.cpp.i

CMakeFiles/raster.dir/src/hue_shift.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/hue_shift.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/hue_shift.cpp -o CMakeFiles/raster.dir/src/hue_shift.cpp.s

CMakeFiles/raster.dir/src/over.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/over.cpp.o: ../src/over.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/raster.dir/src/over.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/over.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/over.cpp

CMakeFiles/raster.dir/src/over.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/over.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/over.cpp > CMakeFiles/raster.dir/src/over.cpp.i

CMakeFiles/raster.dir/src/over.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/over.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/over.cpp -o CMakeFiles/raster.dir/src/over.cpp.s

CMakeFiles/raster.dir/src/reflect.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/reflect.cpp.o: ../src/reflect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/raster.dir/src/reflect.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/reflect.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/reflect.cpp

CMakeFiles/raster.dir/src/reflect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/reflect.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/reflect.cpp > CMakeFiles/raster.dir/src/reflect.cpp.i

CMakeFiles/raster.dir/src/reflect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/reflect.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/reflect.cpp -o CMakeFiles/raster.dir/src/reflect.cpp.s

CMakeFiles/raster.dir/src/rgb_to_gray.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/rgb_to_gray.cpp.o: ../src/rgb_to_gray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/raster.dir/src/rgb_to_gray.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/rgb_to_gray.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rgb_to_gray.cpp

CMakeFiles/raster.dir/src/rgb_to_gray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/rgb_to_gray.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rgb_to_gray.cpp > CMakeFiles/raster.dir/src/rgb_to_gray.cpp.i

CMakeFiles/raster.dir/src/rgb_to_gray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/rgb_to_gray.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rgb_to_gray.cpp -o CMakeFiles/raster.dir/src/rgb_to_gray.cpp.s

CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.o: ../src/rgb_to_hsv.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rgb_to_hsv.cpp

CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rgb_to_hsv.cpp > CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.i

CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rgb_to_hsv.cpp -o CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.s

CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.o: ../src/rgba_to_rgb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rgba_to_rgb.cpp

CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rgba_to_rgb.cpp > CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.i

CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rgba_to_rgb.cpp -o CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.s

CMakeFiles/raster.dir/src/rotate.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/rotate.cpp.o: ../src/rotate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/raster.dir/src/rotate.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/rotate.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rotate.cpp

CMakeFiles/raster.dir/src/rotate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/rotate.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rotate.cpp > CMakeFiles/raster.dir/src/rotate.cpp.i

CMakeFiles/raster.dir/src/rotate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/rotate.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/rotate.cpp -o CMakeFiles/raster.dir/src/rotate.cpp.s

CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.o: ../src/simulate_bayer_mosaic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/simulate_bayer_mosaic.cpp

CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/simulate_bayer_mosaic.cpp > CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.i

CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/simulate_bayer_mosaic.cpp -o CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.s

CMakeFiles/raster.dir/src/write_ppm.cpp.o: CMakeFiles/raster.dir/flags.make
CMakeFiles/raster.dir/src/write_ppm.cpp.o: ../src/write_ppm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/raster.dir/src/write_ppm.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raster.dir/src/write_ppm.cpp.o -c /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/write_ppm.cpp

CMakeFiles/raster.dir/src/write_ppm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raster.dir/src/write_ppm.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/write_ppm.cpp > CMakeFiles/raster.dir/src/write_ppm.cpp.i

CMakeFiles/raster.dir/src/write_ppm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raster.dir/src/write_ppm.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/src/write_ppm.cpp -o CMakeFiles/raster.dir/src/write_ppm.cpp.s

# Object files for target raster
raster_OBJECTS = \
"CMakeFiles/raster.dir/main.cpp.o" \
"CMakeFiles/raster.dir/src/demosaic.cpp.o" \
"CMakeFiles/raster.dir/src/desaturate.cpp.o" \
"CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.o" \
"CMakeFiles/raster.dir/src/hue_shift.cpp.o" \
"CMakeFiles/raster.dir/src/over.cpp.o" \
"CMakeFiles/raster.dir/src/reflect.cpp.o" \
"CMakeFiles/raster.dir/src/rgb_to_gray.cpp.o" \
"CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.o" \
"CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.o" \
"CMakeFiles/raster.dir/src/rotate.cpp.o" \
"CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.o" \
"CMakeFiles/raster.dir/src/write_ppm.cpp.o"

# External object files for target raster
raster_EXTERNAL_OBJECTS =

raster: CMakeFiles/raster.dir/main.cpp.o
raster: CMakeFiles/raster.dir/src/demosaic.cpp.o
raster: CMakeFiles/raster.dir/src/desaturate.cpp.o
raster: CMakeFiles/raster.dir/src/hsv_to_rgb.cpp.o
raster: CMakeFiles/raster.dir/src/hue_shift.cpp.o
raster: CMakeFiles/raster.dir/src/over.cpp.o
raster: CMakeFiles/raster.dir/src/reflect.cpp.o
raster: CMakeFiles/raster.dir/src/rgb_to_gray.cpp.o
raster: CMakeFiles/raster.dir/src/rgb_to_hsv.cpp.o
raster: CMakeFiles/raster.dir/src/rgba_to_rgb.cpp.o
raster: CMakeFiles/raster.dir/src/rotate.cpp.o
raster: CMakeFiles/raster.dir/src/simulate_bayer_mosaic.cpp.o
raster: CMakeFiles/raster.dir/src/write_ppm.cpp.o
raster: CMakeFiles/raster.dir/build.make
raster: CMakeFiles/raster.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable raster"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/raster.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/raster.dir/build: raster

.PHONY : CMakeFiles/raster.dir/build

CMakeFiles/raster.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/raster.dir/cmake_clean.cmake
.PHONY : CMakeFiles/raster.dir/clean

CMakeFiles/raster.dir/depend:
	cd /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build /Users/maggie/Documents/ComputerGraphics/Computer-Graphics/raster-images/build/CMakeFiles/raster.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/raster.dir/depend

