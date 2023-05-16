// #define _GLFW_X11 
#include <GLFW/glfw3.h>




int main(void)
{
    // GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;
    GLFWwindow* window;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        // glClear(GL_COLOR_BUFFER_BIT);
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);
        glVertex2f(-1.0, -1.0);
        glVertex2f(0.0, 1.0);
        glVertex2f(0.0, -1.0);
        glEnd();

        glBegin(GL_TRIANGLES);
        glVertex2f(1.0, 0.0);
        glVertex2f(0.0, -1.0);
        glVertex2f(1.0, -1.0);
        glEnd();



        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
}
