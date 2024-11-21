# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\quatroEnRalla_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\quatroEnRalla_autogen.dir\\ParseCache.txt"
  "quatroEnRalla_autogen"
  )
endif()
