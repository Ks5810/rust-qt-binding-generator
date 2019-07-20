# CMake generated Testfile for 
# Source directory: /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/tests
# Build directory: /home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(build_test_object "/usr/bin/cmake" "--build" "/home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build" "--target" "test_object")
add_test(test_object "test_object")
set_tests_properties(test_object PROPERTIES  DEPENDS "build_test_object")
add_test(build_test_object_types "/usr/bin/cmake" "--build" "/home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build" "--target" "test_object_types")
add_test(test_object_types "test_object_types")
set_tests_properties(test_object_types PROPERTIES  DEPENDS "build_test_object_types")
add_test(build_test_list "/usr/bin/cmake" "--build" "/home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build" "--target" "test_list")
add_test(test_list "test_list")
set_tests_properties(test_list PROPERTIES  DEPENDS "build_test_list")
add_test(build_test_list_types "/usr/bin/cmake" "--build" "/home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build" "--target" "test_list_types")
add_test(test_list_types "test_list_types")
set_tests_properties(test_list_types PROPERTIES  DEPENDS "build_test_list_types")
add_test(build_test_tree "/usr/bin/cmake" "--build" "/home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build" "--target" "test_tree")
add_test(test_tree "test_tree")
set_tests_properties(test_tree PROPERTIES  DEPENDS "build_test_tree")
add_test(build_test_objects "/usr/bin/cmake" "--build" "/home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build" "--target" "test_objects")
add_test(test_objects "test_objects")
set_tests_properties(test_objects PROPERTIES  DEPENDS "build_test_objects")
add_test(build_test_functions "/usr/bin/cmake" "--build" "/home/keisuke/Projects/RustQtBindings/rust-qt-binding-generator/build" "--target" "test_functions")
add_test(test_functions "test_functions")
set_tests_properties(test_functions PROPERTIES  DEPENDS "build_test_functions")
