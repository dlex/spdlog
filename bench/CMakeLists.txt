# Copyright(c) 2019 spdlog authors Distributed under the MIT License (http://opensource.org/licenses/MIT)

cmake_minimum_required(VERSION 3.11)
project(spudlog_bench CXX)

if(NOT TARGET spudlog)
    # Stand-alone build
    find_package(spudlog CONFIG REQUIRED)
endif()

find_package(Threads REQUIRED)
find_package(benchmark CONFIG)
if(NOT benchmark_FOUND)
    message(STATUS "Using CMake Version ${CMAKE_VERSION}")
    # User can fetch googlebenchmark
    message(STATUS "Downloading GoogleBenchmark")
    include(FetchContent)

    # disable tests
    set(BENCHMARK_ENABLE_TESTING OFF CACHE INTERNAL "")
    # Do not build and run googlebenchmark tests
    FetchContent_Declare(googlebenchmark GIT_REPOSITORY https://github.com/google/benchmark.git GIT_TAG v1.6.0)
    FetchContent_MakeAvailable(googlebenchmark)
endif()

add_executable(bench bench.cpp)
spdlog_enable_warnings(bench)
target_link_libraries(bench PRIVATE spudlog::spudlog)

add_executable(async_bench async_bench.cpp)
target_link_libraries(async_bench PRIVATE spudlog::spudlog)

add_executable(latency latency.cpp)
target_link_libraries(latency PRIVATE benchmark::benchmark spudlog::spudlog)

add_executable(formatter-bench formatter-bench.cpp)
target_link_libraries(formatter-bench PRIVATE benchmark::benchmark spudlog::spudlog)
