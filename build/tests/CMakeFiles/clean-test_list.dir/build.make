# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build

# Utility rule file for clean-test_list.

# Include the progress variables for this target.
include tests/CMakeFiles/clean-test_list.dir/progress.make

tests/CMakeFiles/clean-test_list: tests/clean_test_list


tests/clean_test_list:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating clean_test_list"
	cd /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/tests/rust_list && /home/keisuke/.cargo/bin/cargo clean

clean-test_list: tests/CMakeFiles/clean-test_list
clean-test_list: tests/clean_test_list
clean-test_list: tests/CMakeFiles/clean-test_list.dir/build.make

.PHONY : clean-test_list

# Rule to build all files generated by this target.
tests/CMakeFiles/clean-test_list.dir/build: clean-test_list

.PHONY : tests/CMakeFiles/clean-test_list.dir/build

tests/CMakeFiles/clean-test_list.dir/clean:
	cd /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/clean-test_list.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/clean-test_list.dir/clean

tests/CMakeFiles/clean-test_list.dir/depend:
	cd /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/tests /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build/tests /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build/tests/CMakeFiles/clean-test_list.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/clean-test_list.dir/depend

