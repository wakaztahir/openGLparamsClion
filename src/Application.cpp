#define GLEW_STATIC

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    // Initializing GLEW
    if (glewInit() != GLEW_OK) {
        std::cout << "GLEW DOES NOT FEEL OK !" << std::endl;
    }

    // Printing GLFW Version
    std::cout << glfwGetVersionString() << std::endl;

    float positions[] = {
        -0.5,-0.5,
        0.5,-0.5,
        0,0.5
    };

    unsigned int id;
    glGenBuffers(1, &id);
    glBindBuffer(GL_VERTEX_ARRAY, id);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}