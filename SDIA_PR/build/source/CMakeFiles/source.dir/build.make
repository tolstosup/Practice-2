# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /mnt/c/Users/Роман/Practice-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Роман/Practice-2/build

# Include any dependencies generated for this target.
include source/CMakeFiles/source.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include source/CMakeFiles/source.dir/compiler_depend.make

# Include the progress variables for this target.
include source/CMakeFiles/source.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/source.dir/flags.make

source/CMakeFiles/source.dir/closest.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/closest.cpp.o: /mnt/c/Users/Роман/Practice-2/source/closest.cpp
source/CMakeFiles/source.dir/closest.cpp.o: source/CMakeFiles/source.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/Роман/Practice-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/source.dir/closest.cpp.o"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/CMakeFiles/source.dir/closest.cpp.o -MF CMakeFiles/source.dir/closest.cpp.o.d -o CMakeFiles/source.dir/closest.cpp.o -c /mnt/c/Users/Роман/Practice-2/source/closest.cpp

source/CMakeFiles/source.dir/closest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/source.dir/closest.cpp.i"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Роман/Practice-2/source/closest.cpp > CMakeFiles/source.dir/closest.cpp.i

source/CMakeFiles/source.dir/closest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/source.dir/closest.cpp.s"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Роман/Practice-2/source/closest.cpp -o CMakeFiles/source.dir/closest.cpp.s

source/CMakeFiles/source.dir/multiply.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/multiply.cpp.o: /mnt/c/Users/Роман/Practice-2/source/multiply.cpp
source/CMakeFiles/source.dir/multiply.cpp.o: source/CMakeFiles/source.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/Роман/Practice-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/CMakeFiles/source.dir/multiply.cpp.o"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/CMakeFiles/source.dir/multiply.cpp.o -MF CMakeFiles/source.dir/multiply.cpp.o.d -o CMakeFiles/source.dir/multiply.cpp.o -c /mnt/c/Users/Роман/Practice-2/source/multiply.cpp

source/CMakeFiles/source.dir/multiply.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/source.dir/multiply.cpp.i"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Роман/Practice-2/source/multiply.cpp > CMakeFiles/source.dir/multiply.cpp.i

source/CMakeFiles/source.dir/multiply.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/source.dir/multiply.cpp.s"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Роман/Practice-2/source/multiply.cpp -o CMakeFiles/source.dir/multiply.cpp.s

source/CMakeFiles/source.dir/median.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/median.cpp.o: /mnt/c/Users/Роман/Practice-2/source/median.cpp
source/CMakeFiles/source.dir/median.cpp.o: source/CMakeFiles/source.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/Роман/Practice-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object source/CMakeFiles/source.dir/median.cpp.o"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/CMakeFiles/source.dir/median.cpp.o -MF CMakeFiles/source.dir/median.cpp.o.d -o CMakeFiles/source.dir/median.cpp.o -c /mnt/c/Users/Роман/Practice-2/source/median.cpp

source/CMakeFiles/source.dir/median.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/source.dir/median.cpp.i"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Роман/Practice-2/source/median.cpp > CMakeFiles/source.dir/median.cpp.i

source/CMakeFiles/source.dir/median.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/source.dir/median.cpp.s"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Роман/Practice-2/source/median.cpp -o CMakeFiles/source.dir/median.cpp.s

source/CMakeFiles/source.dir/power.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/power.cpp.o: /mnt/c/Users/Роман/Practice-2/source/power.cpp
source/CMakeFiles/source.dir/power.cpp.o: source/CMakeFiles/source.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/Роман/Practice-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object source/CMakeFiles/source.dir/power.cpp.o"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/CMakeFiles/source.dir/power.cpp.o -MF CMakeFiles/source.dir/power.cpp.o.d -o CMakeFiles/source.dir/power.cpp.o -c /mnt/c/Users/Роман/Practice-2/source/power.cpp

source/CMakeFiles/source.dir/power.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/source.dir/power.cpp.i"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Роман/Practice-2/source/power.cpp > CMakeFiles/source.dir/power.cpp.i

source/CMakeFiles/source.dir/power.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/source.dir/power.cpp.s"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Роман/Practice-2/source/power.cpp -o CMakeFiles/source.dir/power.cpp.s

source/CMakeFiles/source.dir/substring.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/substring.cpp.o: /mnt/c/Users/Роман/Practice-2/source/substring.cpp
source/CMakeFiles/source.dir/substring.cpp.o: source/CMakeFiles/source.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/Роман/Practice-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object source/CMakeFiles/source.dir/substring.cpp.o"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/CMakeFiles/source.dir/substring.cpp.o -MF CMakeFiles/source.dir/substring.cpp.o.d -o CMakeFiles/source.dir/substring.cpp.o -c /mnt/c/Users/Роман/Practice-2/source/substring.cpp

source/CMakeFiles/source.dir/substring.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/source.dir/substring.cpp.i"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Роман/Practice-2/source/substring.cpp > CMakeFiles/source.dir/substring.cpp.i

source/CMakeFiles/source.dir/substring.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/source.dir/substring.cpp.s"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Роман/Practice-2/source/substring.cpp -o CMakeFiles/source.dir/substring.cpp.s

source/CMakeFiles/source.dir/convexHull.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/convexHull.cpp.o: /mnt/c/Users/Роман/Practice-2/source/convexHull.cpp
source/CMakeFiles/source.dir/convexHull.cpp.o: source/CMakeFiles/source.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/Роман/Practice-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object source/CMakeFiles/source.dir/convexHull.cpp.o"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/CMakeFiles/source.dir/convexHull.cpp.o -MF CMakeFiles/source.dir/convexHull.cpp.o.d -o CMakeFiles/source.dir/convexHull.cpp.o -c /mnt/c/Users/Роман/Practice-2/source/convexHull.cpp

source/CMakeFiles/source.dir/convexHull.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/source.dir/convexHull.cpp.i"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Роман/Practice-2/source/convexHull.cpp > CMakeFiles/source.dir/convexHull.cpp.i

source/CMakeFiles/source.dir/convexHull.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/source.dir/convexHull.cpp.s"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Роман/Practice-2/source/convexHull.cpp -o CMakeFiles/source.dir/convexHull.cpp.s

source/CMakeFiles/source.dir/array.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/array.cpp.o: /mnt/c/Users/Роман/Practice-2/source/array.cpp
source/CMakeFiles/source.dir/array.cpp.o: source/CMakeFiles/source.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/Роман/Practice-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object source/CMakeFiles/source.dir/array.cpp.o"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/CMakeFiles/source.dir/array.cpp.o -MF CMakeFiles/source.dir/array.cpp.o.d -o CMakeFiles/source.dir/array.cpp.o -c /mnt/c/Users/Роман/Practice-2/source/array.cpp

source/CMakeFiles/source.dir/array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/source.dir/array.cpp.i"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Роман/Practice-2/source/array.cpp > CMakeFiles/source.dir/array.cpp.i

source/CMakeFiles/source.dir/array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/source.dir/array.cpp.s"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Роман/Practice-2/source/array.cpp -o CMakeFiles/source.dir/array.cpp.s

source/CMakeFiles/source.dir/segments.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/segments.cpp.o: /mnt/c/Users/Роман/Practice-2/source/segments.cpp
source/CMakeFiles/source.dir/segments.cpp.o: source/CMakeFiles/source.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/Роман/Practice-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object source/CMakeFiles/source.dir/segments.cpp.o"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/CMakeFiles/source.dir/segments.cpp.o -MF CMakeFiles/source.dir/segments.cpp.o.d -o CMakeFiles/source.dir/segments.cpp.o -c /mnt/c/Users/Роман/Practice-2/source/segments.cpp

source/CMakeFiles/source.dir/segments.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/source.dir/segments.cpp.i"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Роман/Practice-2/source/segments.cpp > CMakeFiles/source.dir/segments.cpp.i

source/CMakeFiles/source.dir/segments.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/source.dir/segments.cpp.s"
	cd /mnt/c/Users/Роман/Practice-2/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Роман/Practice-2/source/segments.cpp -o CMakeFiles/source.dir/segments.cpp.s

# Object files for target source
source_OBJECTS = \
"CMakeFiles/source.dir/closest.cpp.o" \
"CMakeFiles/source.dir/multiply.cpp.o" \
"CMakeFiles/source.dir/median.cpp.o" \
"CMakeFiles/source.dir/power.cpp.o" \
"CMakeFiles/source.dir/substring.cpp.o" \
"CMakeFiles/source.dir/convexHull.cpp.o" \
"CMakeFiles/source.dir/array.cpp.o" \
"CMakeFiles/source.dir/segments.cpp.o"

# External object files for target source
source_EXTERNAL_OBJECTS =

source/libsource.a: source/CMakeFiles/source.dir/closest.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/multiply.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/median.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/power.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/substring.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/convexHull.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/array.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/segments.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/build.make
source/libsource.a: source/CMakeFiles/source.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/mnt/c/Users/Роман/Practice-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX static library libsource.a"
	cd /mnt/c/Users/Роман/Practice-2/build/source && $(CMAKE_COMMAND) -P CMakeFiles/source.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/Роман/Practice-2/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/source.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/source.dir/build: source/libsource.a
.PHONY : source/CMakeFiles/source.dir/build

source/CMakeFiles/source.dir/clean:
	cd /mnt/c/Users/Роман/Practice-2/build/source && $(CMAKE_COMMAND) -P CMakeFiles/source.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/source.dir/clean

source/CMakeFiles/source.dir/depend:
	cd /mnt/c/Users/Роман/Practice-2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Роман/Practice-2 /mnt/c/Users/Роман/Practice-2/source /mnt/c/Users/Роман/Practice-2/build /mnt/c/Users/Роман/Practice-2/build/source /mnt/c/Users/Роман/Practice-2/build/source/CMakeFiles/source.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : source/CMakeFiles/source.dir/depend

