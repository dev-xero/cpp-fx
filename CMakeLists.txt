cmake_minimum_required(VERSION 3.5)

project(CPP_FX)
add_executable(main main.cpp)

set(CURL_LIBRARY "C:/Users/elo48/OneDrive/Documents/C and C++ Programs/cpp-fx/curl/lib/libcurl.a")
set(CURL_INCLUDE_DIR "curl/include")

find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIRS})
target_link_libraries(main ${CURL_LIBRARIES})

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")