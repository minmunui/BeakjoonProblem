# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\desktop\git\Be1368_Hockey

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\desktop\git\Be1368_Hockey\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Be1368_Hockey.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Be1368_Hockey.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Be1368_Hockey.dir/flags.make

CMakeFiles/Be1368_Hockey.dir/main.cpp.obj: CMakeFiles/Be1368_Hockey.dir/flags.make
CMakeFiles/Be1368_Hockey.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\desktop\git\Be1368_Hockey\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Be1368_Hockey.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Be1368_Hockey.dir\main.cpp.obj -c C:\desktop\git\Be1368_Hockey\main.cpp

CMakeFiles/Be1368_Hockey.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Be1368_Hockey.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\desktop\git\Be1368_Hockey\main.cpp > CMakeFiles\Be1368_Hockey.dir\main.cpp.i

CMakeFiles/Be1368_Hockey.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Be1368_Hockey.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\desktop\git\Be1368_Hockey\main.cpp -o CMakeFiles\Be1368_Hockey.dir\main.cpp.s

# Object files for target Be1368_Hockey
Be1368_Hockey_OBJECTS = \
"CMakeFiles/Be1368_Hockey.dir/main.cpp.obj"

# External object files for target Be1368_Hockey
Be1368_Hockey_EXTERNAL_OBJECTS =

Be1368_Hockey.exe: CMakeFiles/Be1368_Hockey.dir/main.cpp.obj
Be1368_Hockey.exe: CMakeFiles/Be1368_Hockey.dir/build.make
Be1368_Hockey.exe: CMakeFiles/Be1368_Hockey.dir/linklibs.rsp
Be1368_Hockey.exe: CMakeFiles/Be1368_Hockey.dir/objects1.rsp
Be1368_Hockey.exe: CMakeFiles/Be1368_Hockey.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\desktop\git\Be1368_Hockey\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Be1368_Hockey.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Be1368_Hockey.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Be1368_Hockey.dir/build: Be1368_Hockey.exe
.PHONY : CMakeFiles/Be1368_Hockey.dir/build

CMakeFiles/Be1368_Hockey.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Be1368_Hockey.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Be1368_Hockey.dir/clean

CMakeFiles/Be1368_Hockey.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\desktop\git\Be1368_Hockey C:\desktop\git\Be1368_Hockey C:\desktop\git\Be1368_Hockey\cmake-build-debug C:\desktop\git\Be1368_Hockey\cmake-build-debug C:\desktop\git\Be1368_Hockey\cmake-build-debug\CMakeFiles\Be1368_Hockey.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Be1368_Hockey.dir/depend

