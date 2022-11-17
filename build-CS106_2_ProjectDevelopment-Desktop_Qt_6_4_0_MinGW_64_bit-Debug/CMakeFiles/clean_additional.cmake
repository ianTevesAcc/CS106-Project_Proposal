# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\CS106_2_ProjectDevelopment_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CS106_2_ProjectDevelopment_autogen.dir\\ParseCache.txt"
  "CS106_2_ProjectDevelopment_autogen"
  )
endif()
