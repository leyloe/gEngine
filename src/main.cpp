#include <iostream>
#include <stdexcept>

#include "app.hpp"

int main()
{
    gve::app app;

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
