
#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"

#include "glh/glh.h"

#include <iostream>

int main(int argc, char argv[])
{
    if (!glfwInit()) {
        std::cerr << "GLFW init failed!" << std::endl;
    }
}