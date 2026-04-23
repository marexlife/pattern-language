cmake_minimum_required(VERSION 3.20)
project(vendor)

include(FetchContent)

FetchContent_Declare(ABSL
    GIT_REPOSITORY https://github.com/abseil/abseil-cpp.git
    GIT_TAG lts_2026_01_07
)

FetchContent_MakeAvailable(ABSL)