#pragma once

#include "Window.hpp"
#include "Device/Device.hpp"

namespace ge
{
    class App
    {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();

    private:
        Window window{WIDTH, HEIGHT, "Hello Vulkan!"};
        Device device{window};
    };

}