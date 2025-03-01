#pragma once

#include "Window.hpp"
#include "DeviceStructs.hpp"
#include "Debug.hpp"

namespace ge
{
    struct QueueFamilyIndices;
    struct SwapChainSupportDetails;

    class Device
    {
    private:
        VkInstance instance;
        VkDebugUtilsMessengerEXT debugMessenger;
        VkDevice device;
        VkQueue graphicsQueue;
        VkSurfaceKHR surface;
        Window &window;
        VkQueue presentQueue;

        const std::vector<const char *> validationLayers = {"VK_LAYER_KHRONOS_validation"};
        const std::vector<const char *> deviceExtensions = {VK_KHR_SWAPCHAIN_EXTENSION_NAME};

        VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;

        bool checkValidationLayerSupport();
        std::vector<const char *> getRequiredExtensions();

        void createInstance();
        void setupDebugMessenger();
        void createSurface();
        void pickPhysicalDevice();
        void createLogicalDevice();

        bool isDeviceSuitable(VkPhysicalDevice device);
        QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

        bool checkDeviceExtensionSupport(VkPhysicalDevice device);

    public:
#ifdef NDEBUG
        const bool enableValidationLayers = false;
#else
        const bool enableValidationLayers = true;
#endif

        Device(Window &window);
        ~Device();

        SwapChainSupportDetails querySwapChainSupport(VkPhysicalDevice device);

        Device(const Device &) = delete;
        void operator=(const Device &) = delete;

        Device(Device &&) = delete;
        Device &operator=(Device &&) = delete;
    };
}