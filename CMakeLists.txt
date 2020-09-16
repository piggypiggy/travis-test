cmake_minimum_required(VERSION 3.4.0)

project(travis-test LANGUAGES C)

add_executable(m main.c)

enable_testing()
add_executable(t test.c)
add_test(MYTEST t)