# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\T-Gamer\CLionProjects\Arvore\Arvore

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\T-Gamer\CLionProjects\Arvore\Arvore\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Arvore.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Arvore.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Arvore.dir\flags.make

CMakeFiles\Arvore.dir\main.cpp.obj: CMakeFiles\Arvore.dir\flags.make
CMakeFiles\Arvore.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\T-Gamer\CLionProjects\Arvore\Arvore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Arvore.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Arvore.dir\main.cpp.obj /FdCMakeFiles\Arvore.dir\ /FS -c C:\Users\T-Gamer\CLionProjects\Arvore\Arvore\main.cpp
<<

CMakeFiles\Arvore.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Arvore.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\Arvore.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\T-Gamer\CLionProjects\Arvore\Arvore\main.cpp
<<

CMakeFiles\Arvore.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Arvore.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Arvore.dir\main.cpp.s /c C:\Users\T-Gamer\CLionProjects\Arvore\Arvore\main.cpp
<<

# Object files for target Arvore
Arvore_OBJECTS = \
"CMakeFiles\Arvore.dir\main.cpp.obj"

# External object files for target Arvore
Arvore_EXTERNAL_OBJECTS =

Arvore.exe: CMakeFiles\Arvore.dir\main.cpp.obj
Arvore.exe: CMakeFiles\Arvore.dir\build.make
Arvore.exe: CMakeFiles\Arvore.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\T-Gamer\CLionProjects\Arvore\Arvore\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Arvore.exe"
	"C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Arvore.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Arvore.dir\objects1.rsp @<<
 /out:Arvore.exe /implib:Arvore.lib /pdb:C:\Users\T-Gamer\CLionProjects\Arvore\Arvore\cmake-build-debug\Arvore.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Arvore.dir\build: Arvore.exe

.PHONY : CMakeFiles\Arvore.dir\build

CMakeFiles\Arvore.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Arvore.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Arvore.dir\clean

CMakeFiles\Arvore.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\T-Gamer\CLionProjects\Arvore\Arvore C:\Users\T-Gamer\CLionProjects\Arvore\Arvore C:\Users\T-Gamer\CLionProjects\Arvore\Arvore\cmake-build-debug C:\Users\T-Gamer\CLionProjects\Arvore\Arvore\cmake-build-debug C:\Users\T-Gamer\CLionProjects\Arvore\Arvore\cmake-build-debug\CMakeFiles\Arvore.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Arvore.dir\depend

