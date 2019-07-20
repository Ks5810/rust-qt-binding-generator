file(REMOVE_RECURSE
  "MyExe_autogen"
  "CMakeFiles/MyExe_autogen.dir/AutogenOldSettings.cmake"
  "CMakeFiles/rust_target"
  "../rust/target/release/librust.a"
  "../rust/src/interface.rs"
  "../src/Bindings.h"
  "../src/Bindings.cpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/rust_target.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
