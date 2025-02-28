#pragma once

#include "Device.hpp"

#include <optional>

namespace ge
{
    struct QueueFamilyIndices
    {
        std::optional<uint32_t> graphicsFamily;
        std::optional<uint32_t> presentFamily;

        bool isComplete();
    };
}