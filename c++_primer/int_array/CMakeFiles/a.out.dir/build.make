# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /work/project/c_c++_pro/c++_primer/int_array

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/project/c_c++_pro/c++_primer/int_array

# Include any dependencies generated for this target.
include CMakeFiles/a.out.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a.out.dir/flags.make

CMakeFiles/a.out.dir/main.cpp.o: CMakeFiles/a.out.dir/flags.make
CMakeFiles/a.out.dir/main.cpp.o: main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /work/project/c_c++_pro/c++_primer/int_array/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/a.out.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/a.out.dir/main.cpp.o -c /work/project/c_c++_pro/c++_primer/int_array/main.cpp

CMakeFiles/a.out.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /work/project/c_c++_pro/c++_primer/int_array/main.cpp > CMakeFiles/a.out.dir/main.cpp.i

CMakeFiles/a.out.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /work/project/c_c++_pro/c++_primer/int_array/main.cpp -o CMakeFiles/a.out.dir/main.cpp.s

CMakeFiles/a.out.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/a.out.dir/main.cpp.o.requires

CMakeFiles/a.out.dir/main.cpp.o.provides: CMakeFiles/a.out.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/a.out.dir/build.make CMakeFiles/a.out.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/a.out.dir/main.cpp.o.provides

CMakeFiles/a.out.dir/main.cpp.o.provides.build: CMakeFiles/a.out.dir/main.cpp.o

CMakeFiles/a.out.dir/int_array_rc.cpp.o: CMakeFiles/a.out.dir/flags.make
CMakeFiles/a.out.dir/int_array_rc.cpp.o: int_array_rc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /work/project/c_c++_pro/c++_primer/int_array/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/a.out.dir/int_array_rc.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/a.out.dir/int_array_rc.cpp.o -c /work/project/c_c++_pro/c++_primer/int_array/int_array_rc.cpp

CMakeFiles/a.out.dir/int_array_rc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.dir/int_array_rc.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /work/project/c_c++_pro/c++_primer/int_array/int_array_rc.cpp > CMakeFiles/a.out.dir/int_array_rc.cpp.i

CMakeFiles/a.out.dir/int_array_rc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.dir/int_array_rc.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /work/project/c_c++_pro/c++_primer/int_array/int_array_rc.cpp -o CMakeFiles/a.out.dir/int_array_rc.cpp.s

CMakeFiles/a.out.dir/int_array_rc.cpp.o.requires:
.PHONY : CMakeFiles/a.out.dir/int_array_rc.cpp.o.requires

CMakeFiles/a.out.dir/int_array_rc.cpp.o.provides: CMakeFiles/a.out.dir/int_array_rc.cpp.o.requires
	$(MAKE) -f CMakeFiles/a.out.dir/build.make CMakeFiles/a.out.dir/int_array_rc.cpp.o.provides.build
.PHONY : CMakeFiles/a.out.dir/int_array_rc.cpp.o.provides

CMakeFiles/a.out.dir/int_array_rc.cpp.o.provides.build: CMakeFiles/a.out.dir/int_array_rc.cpp.o

CMakeFiles/a.out.dir/int_array.cpp.o: CMakeFiles/a.out.dir/flags.make
CMakeFiles/a.out.dir/int_array.cpp.o: int_array.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /work/project/c_c++_pro/c++_primer/int_array/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/a.out.dir/int_array.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/a.out.dir/int_array.cpp.o -c /work/project/c_c++_pro/c++_primer/int_array/int_array.cpp

CMakeFiles/a.out.dir/int_array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.dir/int_array.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /work/project/c_c++_pro/c++_primer/int_array/int_array.cpp > CMakeFiles/a.out.dir/int_array.cpp.i

CMakeFiles/a.out.dir/int_array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.dir/int_array.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /work/project/c_c++_pro/c++_primer/int_array/int_array.cpp -o CMakeFiles/a.out.dir/int_array.cpp.s

CMakeFiles/a.out.dir/int_array.cpp.o.requires:
.PHONY : CMakeFiles/a.out.dir/int_array.cpp.o.requires

CMakeFiles/a.out.dir/int_array.cpp.o.provides: CMakeFiles/a.out.dir/int_array.cpp.o.requires
	$(MAKE) -f CMakeFiles/a.out.dir/build.make CMakeFiles/a.out.dir/int_array.cpp.o.provides.build
.PHONY : CMakeFiles/a.out.dir/int_array.cpp.o.provides

CMakeFiles/a.out.dir/int_array.cpp.o.provides.build: CMakeFiles/a.out.dir/int_array.cpp.o

# Object files for target a.out
a_out_OBJECTS = \
"CMakeFiles/a.out.dir/main.cpp.o" \
"CMakeFiles/a.out.dir/int_array_rc.cpp.o" \
"CMakeFiles/a.out.dir/int_array.cpp.o"

# External object files for target a.out
a_out_EXTERNAL_OBJECTS =

a.out: CMakeFiles/a.out.dir/main.cpp.o
a.out: CMakeFiles/a.out.dir/int_array_rc.cpp.o
a.out: CMakeFiles/a.out.dir/int_array.cpp.o
a.out: CMakeFiles/a.out.dir/build.make
a.out: CMakeFiles/a.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable a.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a.out.dir/build: a.out
.PHONY : CMakeFiles/a.out.dir/build

CMakeFiles/a.out.dir/requires: CMakeFiles/a.out.dir/main.cpp.o.requires
CMakeFiles/a.out.dir/requires: CMakeFiles/a.out.dir/int_array_rc.cpp.o.requires
CMakeFiles/a.out.dir/requires: CMakeFiles/a.out.dir/int_array.cpp.o.requires
.PHONY : CMakeFiles/a.out.dir/requires

CMakeFiles/a.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a.out.dir/clean

CMakeFiles/a.out.dir/depend:
	cd /work/project/c_c++_pro/c++_primer/int_array && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/project/c_c++_pro/c++_primer/int_array /work/project/c_c++_pro/c++_primer/int_array /work/project/c_c++_pro/c++_primer/int_array /work/project/c_c++_pro/c++_primer/int_array /work/project/c_c++_pro/c++_primer/int_array/CMakeFiles/a.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a.out.dir/depend
