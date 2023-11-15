/**
 * @file main.cpp
 * @author your name (zemingzeng@126.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iostream"
#include "opengl/OpenGL.h"

int main()
{
    std::cout << std::endl;
    std::cout << "hello opengl!!" << std::endl;

    OpenGL openGL;
    openGL.start();

    return 0;
}