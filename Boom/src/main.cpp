#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <loguru.cpp>
#include "./include/renderer.h"

int main(int argc, char** argv) {
	loguru::init(argc, argv);
	Renderer render;
	try {
		render.run();
	}
	catch (const std::exception& e) {
		LOG_F(FATAL, "Error running render: %s", e.what());
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

