#include <iostream>
#include <stdexcept>

#include "App.hpp"

int main()
{
    ge::App app;

    try
    {
        app.run();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
