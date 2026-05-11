cmake_minimum_required(VERSION 3.10)
project("IntegrationShapeVectorRendering")
file(GLOB_RECURSE SOURCES "*.cpp" "*.cc")
add_library("ShapeVectorRendering" STATIC ${SOURCES})
