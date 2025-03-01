#pragma once

#include "Window.hpp"

#include <fstream>

namespace ge
{
    class Pipeline
    {
    public:
        Pipeline(const std::string &vertFilepath, const std::string &fragFilepath);

    private:
        static std::vector<char> readFile(const std::string &filepath);

        void createGraphicsPipeline(const std::string &vertFilepath, const std::string &fragFilepath);
    };
}