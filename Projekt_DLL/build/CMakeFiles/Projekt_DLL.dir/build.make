# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/build"

# Include any dependencies generated for this target.
include CMakeFiles/Projekt_DLL.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Projekt_DLL.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Projekt_DLL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Projekt_DLL.dir/flags.make

CMakeFiles/Projekt_DLL.dir/Country.cpp.o: CMakeFiles/Projekt_DLL.dir/flags.make
CMakeFiles/Projekt_DLL.dir/Country.cpp.o: /Users/kamil/Desktop/Programy/D&D/Projekt_DLL/Country.cpp
CMakeFiles/Projekt_DLL.dir/Country.cpp.o: CMakeFiles/Projekt_DLL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Projekt_DLL.dir/Country.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Projekt_DLL.dir/Country.cpp.o -MF CMakeFiles/Projekt_DLL.dir/Country.cpp.o.d -o CMakeFiles/Projekt_DLL.dir/Country.cpp.o -c "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/Country.cpp"

CMakeFiles/Projekt_DLL.dir/Country.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Projekt_DLL.dir/Country.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/Country.cpp" > CMakeFiles/Projekt_DLL.dir/Country.cpp.i

CMakeFiles/Projekt_DLL.dir/Country.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Projekt_DLL.dir/Country.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/Country.cpp" -o CMakeFiles/Projekt_DLL.dir/Country.cpp.s

CMakeFiles/Projekt_DLL.dir/Countries.cpp.o: CMakeFiles/Projekt_DLL.dir/flags.make
CMakeFiles/Projekt_DLL.dir/Countries.cpp.o: /Users/kamil/Desktop/Programy/D&D/Projekt_DLL/Countries.cpp
CMakeFiles/Projekt_DLL.dir/Countries.cpp.o: CMakeFiles/Projekt_DLL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Projekt_DLL.dir/Countries.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Projekt_DLL.dir/Countries.cpp.o -MF CMakeFiles/Projekt_DLL.dir/Countries.cpp.o.d -o CMakeFiles/Projekt_DLL.dir/Countries.cpp.o -c "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/Countries.cpp"

CMakeFiles/Projekt_DLL.dir/Countries.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Projekt_DLL.dir/Countries.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/Countries.cpp" > CMakeFiles/Projekt_DLL.dir/Countries.cpp.i

CMakeFiles/Projekt_DLL.dir/Countries.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Projekt_DLL.dir/Countries.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/Countries.cpp" -o CMakeFiles/Projekt_DLL.dir/Countries.cpp.s

# Object files for target Projekt_DLL
Projekt_DLL_OBJECTS = \
"CMakeFiles/Projekt_DLL.dir/Country.cpp.o" \
"CMakeFiles/Projekt_DLL.dir/Countries.cpp.o"

# External object files for target Projekt_DLL
Projekt_DLL_EXTERNAL_OBJECTS =

libProjekt_DLL.dylib: CMakeFiles/Projekt_DLL.dir/Country.cpp.o
libProjekt_DLL.dylib: CMakeFiles/Projekt_DLL.dir/Countries.cpp.o
libProjekt_DLL.dylib: CMakeFiles/Projekt_DLL.dir/build.make
libProjekt_DLL.dylib: CMakeFiles/Projekt_DLL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libProjekt_DLL.dylib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Projekt_DLL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Projekt_DLL.dir/build: libProjekt_DLL.dylib
.PHONY : CMakeFiles/Projekt_DLL.dir/build

CMakeFiles/Projekt_DLL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Projekt_DLL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Projekt_DLL.dir/clean

CMakeFiles/Projekt_DLL.dir/depend:
	cd "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL" "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL" "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/build" "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/build" "/Users/kamil/Desktop/Programy/D&D/Projekt_DLL/build/CMakeFiles/Projekt_DLL.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Projekt_DLL.dir/depend

