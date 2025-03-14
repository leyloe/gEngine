#pragma once

#include "Window.hpp"
#include "DeviceStructs.hpp"
#include "Debug.hpp"
#include "Device/Helper.hpp"

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
        VkSwapchainKHR swapChain;
        std::vector<VkImage> swapChainImages;
        VkFormat swapChainImageFormat;
        VkExtent2D swapChainExtent;

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
        void createSwapChain();

        bool isDeviceSuitable(VkPhysicalDevice device);
        QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

        bool checkDeviceExtensionSupport(VkPhysicalDevice device);

        VkExtent2D chooseSwapExtent(const VkSurfaceCapabilitiesKHR &capabilities);

    public:
#ifdef NDEBUG
        const bool enableValidationLayers = false;
#else
        const bool enableValidationLayers = true;
#endif

        Device(Window &window);
        ~Device();

        VkDevice _device() { return device; }

        SwapChainSupportDetails querySwapChainSupport(VkPhysicalDevice device);

        Device(const Device &) = delete;
        void operator=(const Device &) = delete;

        Device(Device &&) = delete;
        Device &operator=(Device &&) = delete;
    };
}