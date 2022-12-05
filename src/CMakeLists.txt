cmake_minimum_required(VERSION 3.23)
file(GLOB
        CPP_SOURCES "*.cpp")

add_executable(${PROJECT_NAME}  ${CPP_SOURCES}
                                ${MY_INCLUDE_DIR}/IGraph.h
                                ${MY_INCLUDE_DIR}/ListGraph.h
                                ${MY_INCLUDE_DIR}/MatrixGraph.h)

target_include_directories(${PROJECT_NAME} PUBLIC ${MY_INCLUDE_DIR})
