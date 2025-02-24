## G Engine
Gangster engine (i think)

## Build
Use your POSIX shell or something.
```bash
mkdir build && cd build
cmake .. -G Ninja -D CMAKE_C_COMPILER=clang -D CMAKE_CXX_COMPILER=clang++
cmake --build . --parallel
```
Oh yeah, and you need the following development libraries installed: **Vulkan, GLFW, GLM.** I have no clue what platform you're on so figure it out.