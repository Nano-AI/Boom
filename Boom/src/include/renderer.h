#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include <iostream>
#include <loguru.hpp>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class Renderer
{
public:
	void run();
private:
	GLFWwindow* window;
	VkInstance instance;
	void initWindow();
	void initVulkan();
	void createInstance();
	void mainLoop();
	void cleanup();
};

