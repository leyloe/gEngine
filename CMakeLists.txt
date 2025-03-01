cmake_minimum_required(VERSION 3.30)

project(gEngine)

set(SOURCES
    Sources/Main.cpp
    Sources/App.cpp
    Sources/Window.cpp
    Sources/Device/Device.cpp
    Sources/Device/Debug.cpp
    Sources/Device/DeviceStructs.cpp
    Sources/Device/DeviceHelper.cpp
    Sources/Device/Helper.cpp
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

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Headers)
