#pragma once

#include <string>

namespace ge
{
    class Window
    {
    private:
        void initWindow();

    public:
        Window(int w, int h, std::string name);
        ~Window();
    };

}