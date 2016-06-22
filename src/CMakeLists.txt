FILE(GLOB_RECURSE all_files
*.cpp
*.cc
*.c++
*.c
*.C)

include_directories(../../cub/include)

add_library(event STATIC ${all_files})

install(TARGETS event ARCHIVE DESTINATION lib)

