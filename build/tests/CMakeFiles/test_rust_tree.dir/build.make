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

# Utility rule file for test_rust_tree.

# Include the progress variables for this target.
include tests/CMakeFiles/test_rust_tree.dir/progress.make

tests/CMakeFiles/test_rust_tree: ../tests/rust_tree/target/release/librust.a


../tests/rust_tree/target/release/librust.a: ../tests/rust_tree/src/lib.rs
../tests/rust_tree/target/release/librust.a: ../tests/rust_tree/src/implementation.rs
../tests/rust_tree/target/release/librust.a: ../tests/rust_tree/src/interface.rs
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../../tests/rust_tree/target/release/librust.a"
	cd /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/tests/rust_tree && /home/keisuke/.cargo/bin/cargo build --release

../tests/rust_tree/src/interface.rs: ../tests/test_tree.json
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../../tests/rust_tree/src/interface.rs, ../../tests/test_tree_rust.h, ../../tests/test_tree_rust.cpp"
	cd /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build/tests && ../../target/release/rust_qt_binding_generator /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/tests/test_tree.json

../tests/test_tree_rust.h: ../tests/rust_tree/src/interface.rs
	@$(CMAKE_COMMAND) -E touch_nocreate ../tests/test_tree_rust.h

../tests/test_tree_rust.cpp: ../tests/rust_tree/src/interface.rs
	@$(CMAKE_COMMAND) -E touch_nocreate ../tests/test_tree_rust.cpp

test_rust_tree: tests/CMakeFiles/test_rust_tree
test_rust_tree: ../tests/rust_tree/target/release/librust.a
test_rust_tree: ../tests/rust_tree/src/interface.rs
test_rust_tree: ../tests/test_tree_rust.h
test_rust_tree: ../tests/test_tree_rust.cpp
test_rust_tree: tests/CMakeFiles/test_rust_tree.dir/build.make

.PHONY : test_rust_tree

# Rule to build all files generated by this target.
tests/CMakeFiles/test_rust_tree.dir/build: test_rust_tree

.PHONY : tests/CMakeFiles/test_rust_tree.dir/build

tests/CMakeFiles/test_rust_tree.dir/clean:
	cd /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_rust_tree.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_rust_tree.dir/clean

tests/CMakeFiles/test_rust_tree.dir/depend:
	cd /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/tests /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build/tests /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build/tests/CMakeFiles/test_rust_tree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test_rust_tree.dir/depend

