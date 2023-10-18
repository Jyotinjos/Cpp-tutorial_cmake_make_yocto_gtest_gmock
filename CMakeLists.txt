cmake_minimum_required(VERSION 3.22.0)
project(CPPTutorial)

option(BUILD_TESTS "Turn on build for tests of CPPTUtorial" OFF)


file(GLOB SRC_FILES 
	"src/*.cpp"
)

set(INC_FILES_DIR include/
)

if(BUILD_TESTS)
	add_subdirectory(test)
endif()

include_directories(
	${INC_FILES_DIR}
)

add_executable(CPPtutorial
	${SRC_FILES}
)
	
