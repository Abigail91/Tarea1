# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /snap/clion/81/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/81/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/abigail/Escritorio/Tarea1/Cliente

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/abigail/Escritorio/Tarea1/Cliente/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cliente.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cliente.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cliente.dir/flags.make

CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.o: CMakeFiles/Cliente.dir/flags.make
CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.o: Cliente_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abigail/Escritorio/Tarea1/Cliente/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.o -c /home/abigail/Escritorio/Tarea1/Cliente/cmake-build-debug/Cliente_autogen/mocs_compilation.cpp

CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abigail/Escritorio/Tarea1/Cliente/cmake-build-debug/Cliente_autogen/mocs_compilation.cpp > CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.i

CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abigail/Escritorio/Tarea1/Cliente/cmake-build-debug/Cliente_autogen/mocs_compilation.cpp -o CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.s

CMakeFiles/Cliente.dir/main.cpp.o: CMakeFiles/Cliente.dir/flags.make
CMakeFiles/Cliente.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abigail/Escritorio/Tarea1/Cliente/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Cliente.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cliente.dir/main.cpp.o -c /home/abigail/Escritorio/Tarea1/Cliente/main.cpp

CMakeFiles/Cliente.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cliente.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abigail/Escritorio/Tarea1/Cliente/main.cpp > CMakeFiles/Cliente.dir/main.cpp.i

CMakeFiles/Cliente.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cliente.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abigail/Escritorio/Tarea1/Cliente/main.cpp -o CMakeFiles/Cliente.dir/main.cpp.s

# Object files for target Cliente
Cliente_OBJECTS = \
"CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Cliente.dir/main.cpp.o"

# External object files for target Cliente
Cliente_EXTERNAL_OBJECTS =

Cliente: CMakeFiles/Cliente.dir/Cliente_autogen/mocs_compilation.cpp.o
Cliente: CMakeFiles/Cliente.dir/main.cpp.o
Cliente: CMakeFiles/Cliente.dir/build.make
Cliente: CMakeFiles/Cliente.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/abigail/Escritorio/Tarea1/Cliente/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Cliente"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cliente.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cliente.dir/build: Cliente

.PHONY : CMakeFiles/Cliente.dir/build

CMakeFiles/Cliente.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cliente.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cliente.dir/clean

CMakeFiles/Cliente.dir/depend:
	cd /home/abigail/Escritorio/Tarea1/Cliente/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abigail/Escritorio/Tarea1/Cliente /home/abigail/Escritorio/Tarea1/Cliente /home/abigail/Escritorio/Tarea1/Cliente/cmake-build-debug /home/abigail/Escritorio/Tarea1/Cliente/cmake-build-debug /home/abigail/Escritorio/Tarea1/Cliente/cmake-build-debug/CMakeFiles/Cliente.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cliente.dir/depend

