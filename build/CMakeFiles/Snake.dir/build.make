# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = C:\MinGW\bin\cmake.exe

# The command to remove a file.
RM = C:\MinGW\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build

# Include any dependencies generated for this target.
include CMakeFiles/Snake.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Snake.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Snake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Snake.dir/flags.make

CMakeFiles/Snake.dir/src/Field.cpp.obj: CMakeFiles/Snake.dir/flags.make
CMakeFiles/Snake.dir/src/Field.cpp.obj: CMakeFiles/Snake.dir/includes_CXX.rsp
CMakeFiles/Snake.dir/src/Field.cpp.obj: C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/src/Field.cpp
CMakeFiles/Snake.dir/src/Field.cpp.obj: CMakeFiles/Snake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Snake.dir/src/Field.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Snake.dir/src/Field.cpp.obj -MF CMakeFiles\Snake.dir\src\Field.cpp.obj.d -o CMakeFiles\Snake.dir\src\Field.cpp.obj -c C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Field.cpp

CMakeFiles/Snake.dir/src/Field.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Snake.dir/src/Field.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Field.cpp > CMakeFiles\Snake.dir\src\Field.cpp.i

CMakeFiles/Snake.dir/src/Field.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Snake.dir/src/Field.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Field.cpp -o CMakeFiles\Snake.dir\src\Field.cpp.s

CMakeFiles/Snake.dir/src/Fruit.cpp.obj: CMakeFiles/Snake.dir/flags.make
CMakeFiles/Snake.dir/src/Fruit.cpp.obj: CMakeFiles/Snake.dir/includes_CXX.rsp
CMakeFiles/Snake.dir/src/Fruit.cpp.obj: C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/src/Fruit.cpp
CMakeFiles/Snake.dir/src/Fruit.cpp.obj: CMakeFiles/Snake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Snake.dir/src/Fruit.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Snake.dir/src/Fruit.cpp.obj -MF CMakeFiles\Snake.dir\src\Fruit.cpp.obj.d -o CMakeFiles\Snake.dir\src\Fruit.cpp.obj -c C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Fruit.cpp

CMakeFiles/Snake.dir/src/Fruit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Snake.dir/src/Fruit.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Fruit.cpp > CMakeFiles\Snake.dir\src\Fruit.cpp.i

CMakeFiles/Snake.dir/src/Fruit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Snake.dir/src/Fruit.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Fruit.cpp -o CMakeFiles\Snake.dir\src\Fruit.cpp.s

CMakeFiles/Snake.dir/src/Game.cpp.obj: CMakeFiles/Snake.dir/flags.make
CMakeFiles/Snake.dir/src/Game.cpp.obj: CMakeFiles/Snake.dir/includes_CXX.rsp
CMakeFiles/Snake.dir/src/Game.cpp.obj: C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/src/Game.cpp
CMakeFiles/Snake.dir/src/Game.cpp.obj: CMakeFiles/Snake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Snake.dir/src/Game.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Snake.dir/src/Game.cpp.obj -MF CMakeFiles\Snake.dir\src\Game.cpp.obj.d -o CMakeFiles\Snake.dir\src\Game.cpp.obj -c C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Game.cpp

CMakeFiles/Snake.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Snake.dir/src/Game.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Game.cpp > CMakeFiles\Snake.dir\src\Game.cpp.i

CMakeFiles/Snake.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Snake.dir/src/Game.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Game.cpp -o CMakeFiles\Snake.dir\src\Game.cpp.s

CMakeFiles/Snake.dir/src/Part.cpp.obj: CMakeFiles/Snake.dir/flags.make
CMakeFiles/Snake.dir/src/Part.cpp.obj: CMakeFiles/Snake.dir/includes_CXX.rsp
CMakeFiles/Snake.dir/src/Part.cpp.obj: C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/src/Part.cpp
CMakeFiles/Snake.dir/src/Part.cpp.obj: CMakeFiles/Snake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Snake.dir/src/Part.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Snake.dir/src/Part.cpp.obj -MF CMakeFiles\Snake.dir\src\Part.cpp.obj.d -o CMakeFiles\Snake.dir\src\Part.cpp.obj -c C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Part.cpp

CMakeFiles/Snake.dir/src/Part.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Snake.dir/src/Part.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Part.cpp > CMakeFiles\Snake.dir\src\Part.cpp.i

CMakeFiles/Snake.dir/src/Part.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Snake.dir/src/Part.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Part.cpp -o CMakeFiles\Snake.dir\src\Part.cpp.s

CMakeFiles/Snake.dir/src/Snake.cpp.obj: CMakeFiles/Snake.dir/flags.make
CMakeFiles/Snake.dir/src/Snake.cpp.obj: CMakeFiles/Snake.dir/includes_CXX.rsp
CMakeFiles/Snake.dir/src/Snake.cpp.obj: C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/src/Snake.cpp
CMakeFiles/Snake.dir/src/Snake.cpp.obj: CMakeFiles/Snake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Snake.dir/src/Snake.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Snake.dir/src/Snake.cpp.obj -MF CMakeFiles\Snake.dir\src\Snake.cpp.obj.d -o CMakeFiles\Snake.dir\src\Snake.cpp.obj -c C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Snake.cpp

CMakeFiles/Snake.dir/src/Snake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Snake.dir/src/Snake.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Snake.cpp > CMakeFiles\Snake.dir\src\Snake.cpp.i

CMakeFiles/Snake.dir/src/Snake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Snake.dir/src/Snake.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\Snake.cpp -o CMakeFiles\Snake.dir\src\Snake.cpp.s

CMakeFiles/Snake.dir/src/main.cpp.obj: CMakeFiles/Snake.dir/flags.make
CMakeFiles/Snake.dir/src/main.cpp.obj: CMakeFiles/Snake.dir/includes_CXX.rsp
CMakeFiles/Snake.dir/src/main.cpp.obj: C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/src/main.cpp
CMakeFiles/Snake.dir/src/main.cpp.obj: CMakeFiles/Snake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Snake.dir/src/main.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Snake.dir/src/main.cpp.obj -MF CMakeFiles\Snake.dir\src\main.cpp.obj.d -o CMakeFiles\Snake.dir\src\main.cpp.obj -c C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\main.cpp

CMakeFiles/Snake.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Snake.dir/src/main.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\main.cpp > CMakeFiles\Snake.dir\src\main.cpp.i

CMakeFiles/Snake.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Snake.dir/src/main.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\src\main.cpp -o CMakeFiles\Snake.dir\src\main.cpp.s

CMakeFiles/Snake.dir/icon.rc.obj: CMakeFiles/Snake.dir/flags.make
CMakeFiles/Snake.dir/icon.rc.obj: C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/icon.rc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building RC object CMakeFiles/Snake.dir/icon.rc.obj"
	C:\MinGW\bin\windres.exe -O coff $(RC_DEFINES) $(RC_INCLUDES) $(RC_FLAGS) C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\icon.rc CMakeFiles\Snake.dir\icon.rc.obj

# Object files for target Snake
Snake_OBJECTS = \
"CMakeFiles/Snake.dir/src/Field.cpp.obj" \
"CMakeFiles/Snake.dir/src/Fruit.cpp.obj" \
"CMakeFiles/Snake.dir/src/Game.cpp.obj" \
"CMakeFiles/Snake.dir/src/Part.cpp.obj" \
"CMakeFiles/Snake.dir/src/Snake.cpp.obj" \
"CMakeFiles/Snake.dir/src/main.cpp.obj" \
"CMakeFiles/Snake.dir/icon.rc.obj"

# External object files for target Snake
Snake_EXTERNAL_OBJECTS =

C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe: CMakeFiles/Snake.dir/src/Field.cpp.obj
C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe: CMakeFiles/Snake.dir/src/Fruit.cpp.obj
C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe: CMakeFiles/Snake.dir/src/Game.cpp.obj
C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe: CMakeFiles/Snake.dir/src/Part.cpp.obj
C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe: CMakeFiles/Snake.dir/src/Snake.cpp.obj
C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe: CMakeFiles/Snake.dir/src/main.cpp.obj
C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe: CMakeFiles/Snake.dir/icon.rc.obj
C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe: CMakeFiles/Snake.dir/build.make
C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe: CMakeFiles/Snake.dir/linkLibs.rsp
C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe: CMakeFiles/Snake.dir/objects1.rsp
C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe: CMakeFiles/Snake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\bin\Snake.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Snake.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Snake.dir/build: C:/Users/Mariu/OneDrive/Dokumenty/C++/Projects/Snake/bin/Snake.exe
.PHONY : CMakeFiles/Snake.dir/build

CMakeFiles/Snake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Snake.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Snake.dir/clean

CMakeFiles/Snake.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build C:\Users\Mariu\OneDrive\Dokumenty\C++\Projects\Snake\build\CMakeFiles\Snake.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Snake.dir/depend

