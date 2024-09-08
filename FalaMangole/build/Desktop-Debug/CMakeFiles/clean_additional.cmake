# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/FalaMangole_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/FalaMangole_autogen.dir/ParseCache.txt"
  "FalaMangole_autogen"
  )
endif()
