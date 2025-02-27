cmake_minimum_required(VERSION 3.30)

project(gEngine)

set(SOURCES
    src/Main.cpp
    src/App.cpp
    src/Window.cpp
    src/Device.cpp
    src/DebugUtils.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

find_package(glfw3 REQUIRED)
find_package(Vulkan REQUIRED)
find_package(glm REQUIRED)

target_link_libraries(${PROJECT_NAME}
    glfw
    Vulkan::Vulkan
    glm::glm
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)