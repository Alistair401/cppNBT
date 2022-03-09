cmake_minimum_required(VERSION 3.20)

project("cppNBT")

set(TARGET_NAME ${PROJECT_NAME})

include_directories("src")

set(INCLUDE_FILES
    "src/cppnbt.h")

set(SRC_FILES
    "src/tag_string.cc"
    "src/util.cc"
    "src/nbtfile.cc"
    "src/tag.cc"
    "src/tag_byte.cc"
    "src/tag_byte_array.cc"
    "src/tag_compound.cc"
    "src/tag_double.cc"
    "src/tag_end.cc"
    "src/tag_float.cc"
    "src/tag_int.cc"
    "src/tag_list.cc"
    "src/tag_long.cc"
    "src/tag_short.cc")

add_library(${TARGET_NAME} STATIC ${SRC_FILES} ${INCLUDE_FILES})
