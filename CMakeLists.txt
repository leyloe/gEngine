cmake_minimum_required(VERSION 3.10)

project(gEngine)

set(SOURCES
    src/Main.cpp
    src/App.cpp
    src/Window.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

find_package(glfw3 REQUIRED)
target_link_libraries(gEngine glfw)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)