#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

void display_error_message(int code, const char *description);

int main() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return 1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 800, "Computer Graphics Application", nullptr, nullptr);

    if (window == nullptr) {
        const char* description;
        int code = glfwGetError(&description);

        if (description)
            display_error_message(code, description);
        std::cerr << "Failed to create GLFW window!" << std::endl;
        glfwTerminate();
        return 1;
    }

    glfwMakeContextCurrent(window);
    gladLoadGL();

    while(!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}

inline void display_error_message(int code, const char *description) {
    std::cerr << "GLFW Error [" << code << "] " << description << std::endl;
}
