cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 14)
project(leetcode)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)

set(CHALLENGES_MEDIUM_DIR "${PROJECT_SOURCE_DIR}/challenges/medium")
set(CHALLENGES_EASY_DIR "${PROJECT_SOURCE_DIR}/challenges/easy")

# EASY
add_executable(palindrome_number ${CHALLENGES_EASY_DIR}/palindrome_number/main.cpp)
add_executable(reverse_integer ${CHALLENGES_EASY_DIR}/reverse_integer/main.cpp)
add_executable(roman_to_integer ${CHALLENGES_EASY_DIR}/roman_to_integer/main.cpp)
add_executable(two_sum ${CHALLENGES_EASY_DIR}/two_sum/main.cpp)
add_executable(longest_common_prefix ${CHALLENGES_EASY_DIR}/longest_common_prefix/main.cpp)

# MEDIUM
add_executable(add_two_numbers ${CHALLENGES_MEDIUM_DIR}/add_two_numbers/main.cpp)
add_executable(longest_substring_without_repeating
  ${CHALLENGES_MEDIUM_DIR}/longest_substring_without_repeating/main.cpp
  )




