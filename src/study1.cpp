/**
 * 创建一个空白的窗口
 */

#include <iostream>
#include <GLFW/glfw3.h>

int test1()
{
    // 初始化 GLFW
    if (!glfwInit())
    {
        std::cout << "初始化 GLFW 失败" << std::endl;
        return -1;
    }

    // 设置 OpenGL 版本
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // 创建窗口
    GLFWwindow* window = glfwCreateWindow(800, 600, "学习 OpenGL", nullptr, nullptr);
    if (window == nullptr)
    {
        std::cout << "创建窗口失败" << std::endl;
        glfwTerminate();
        return -1;
    }

    // 设置当前上下文
    glfwMakeContextCurrent(window);

    // 主循环
    while (!glfwWindowShouldClose(window))
    {
        // 处理事件
        glfwPollEvents();

        // 清除窗口
        glClear(GL_COLOR_BUFFER_BIT);

        // 交换缓冲区
        glfwSwapBuffers(window);
    }

    // 终止 GLFW
    glfwTerminate();
    return 0;
}