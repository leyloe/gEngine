#pragma once

#include "Window.hpp"

#include <vector>

namespace ge
{
    class Device
    {
    private:
        VkInstance instance;
        VkDebugUtilsMessengerEXT debugMessenger;
        VkDevice device;
        VkQueue graphicsQueue;
        VkSurfaceKHR surface;

        const std::vector<const char *> validationLayers = {"VK_LAYER_KHRONOS_validation"};
        VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;

        bool checkValidationLayerSupport();
        std::vector<const char *> getRequiredExtensions();

        void createInstance();
        void setupDebugMessenger();
        void createSurface();
        void pickPhysicalDevice();
        void createLogicalDevice();

    public:
#ifdef NDEBUG
        const bool enableValidationLayers = false;
#else
        const bool enableValidationLayers = true;
#endif

        Device();
        ~Device();
    };
}