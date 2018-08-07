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


	return 0;
}