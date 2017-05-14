cmake_minimum_required(VERSION 3.7)
project(bs2_lbf_magic_convert)

set(CMAKE_C_STANDARD 11)

add_executable(magic_input magic_input.c)
add_executable(magic_output magic_output.c)