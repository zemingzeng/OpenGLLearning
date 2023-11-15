/**
 * @file OpenGL.cpp
 * @author your name (zemingzeng@126.com)
 * @brief
 * @version 0.1
 * @date 2023-11-07
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "opengl/OpenGL.h"
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "opengl/OpenGLGlobal.h"
// #include "gl3w/gl3w.h"

#include "iostream"

void LOGD(const char *loginfo)
{
    std::cout << std::endl;
    std::cout << "OpenGL Debug : " << loginfo << std::endl;
}

void OpenGL::start()
{
    LOGD("start()");

    // opengl start!!

    // init glfw library and init glfw settings
    int ret = glfwInit();
    LOGD(GLFW_TRUE == ret ? "glfw init success" : "glfw init fail");
    if (GLFW_TRUE != ret)
    {
        glfwTerminate();
    }

    // configure the options prefixed with GLFW_
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // create window
    // also createsanOpenGL context that isassociated with that window
    GLFWwindow *glfwWindow = glfwCreateWindow(opengl::WINDOW_WIDTH, opengl::WINDOW_HEIGHT,
                                              "OpenGL Learning", nullptr, nullptr);
    LOGD(glfwWindow ? "glfwWindow create success" : "glfwWindow create fail");
    if (!glfwWindow)
    {
        glfwTerminate();
    }

    // tell GLFW to make the context of our window the main context on the current threaed
    glfwMakeContextCurrent(glfwWindow);

    // system("pause");
}

OpenGL::~OpenGL()
{
}
