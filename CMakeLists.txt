cmake_minimum_required(VERSION 3.10)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)

set(CHALLENGES_DIR "${PROJECT_SOURCE_DIR}/challenges")
set(CHALLENGES_EASY_DIR "${CHALLENGES_DIR}/easy")
set(CHALLENGES_MEDIUM_DIR "${CHALLENGES_DIR}/medium")
set(CHALLENGES_HARD_DIR "${CHALLENGES_DIR}/hard")

set(EASY_CHALLENGES
    # the name of the directories, also used as executable names
    palindrome_number
    reverse_integer
    roman_to_integer
    two_sum
    longest_common_prefix
    valid_parentheses
    )

set(MEDIUM_CHALLENGES
    # the name of the directories, also used as executable names
    add_two_numbers
    longest_substring_without_repeating
    string_to_integer
    )

set(HARD_CHALLENGES
    # the name of the directories, also used as executable names
    )

foreach(easy_challenge ${EASY_CHALLENGES})
    add_executable(${easy_challenge} ${CHALLENGES_EASY_DIR}/${easy_challenge}/main.cpp)
endforeach()

foreach(medium_challenge ${MEDIUM_CHALLENGES})
    add_executable(${medium_challenge} ${CHALLENGES_MEDIUM_DIR}/${medium_challenge}/main.cpp)
endforeach()

foreach(hard_challenge ${HARD_CHALLENGES})
    add_executable(${hard_challenge} ${CHALLENGES_HARD_DIR}/${HARD_challenge}/main.cpp)
endforeach()

