# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\DS_design1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DS_design1_autogen.dir\\ParseCache.txt"
  "DS_design1_autogen"
  )
endif()
