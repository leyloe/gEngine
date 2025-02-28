// #include "Device.hpp"
#include "DeviceUtils.hpp"

namespace ge
{
    bool QueueFamilyIndices::isComplete()
    {
        return graphicsFamily.has_value() && presentFamily.has_value();
    }
}