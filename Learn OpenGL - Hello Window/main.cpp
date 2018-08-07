#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main()
{
	// instantiate glfw
	glfwInit();
	
	// set major and minor version
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	
	// set core profile for the OpenGL
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(800, 600, "Learn OpenGL", NULL, NULL);

	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window." << std::endl;
		return -1;
	}

	glfwMakeContextCurrent(window);

	return 0;
}