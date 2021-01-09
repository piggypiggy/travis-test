cmake_minimum_required(VERSION 3.4.0)

set(CMAKE_TRY_COMPILE_PLATFORM_VARIABLES
    "CMAKE_XCODE_ATTRIBUTE_CODE_SIGNING_REQUIRED"
    "CMAKE_XCODE_ATTRIBUTE_CODE_SIGNING_ALLOWED")
set(CMAKE_XCODE_ATTRIBUTE_CODE_SIGNING_REQUIRED NO)
set(CMAKE_XCODE_ATTRIBUTE_CODE_SIGNING_ALLOWED NO)

project(travis-test LANGUAGES C)

add_executable(m main.c)

# endianess
include (TestBigEndian)
TEST_BIG_ENDIAN(IS_BIG_ENDIAN)
if(IS_BIG_ENDIAN)
    set(ORDER 0) # config
else()
    set(ORDER 1) # config
endif()
set(ENDIANESS "O.O") # config

enable_testing()
add_executable(t test.c)
add_test(MYTEST t)