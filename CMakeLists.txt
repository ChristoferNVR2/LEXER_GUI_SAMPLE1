cmake_minimum_required(VERSION 3.30)
project(LEXER_GUI_SAMPLE1)

find_package(FLEX REQUIRED)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(FLEX_DIR ${CMAKE_SOURCE_DIR}/flex)
set(GEN_DIR ${CMAKE_BINARY_DIR}/generated)

file(MAKE_DIRECTORY ${GEN_DIR})

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/src)

FLEX_TARGET(MyLexer ${FLEX_DIR}/lexer.l ${GEN_DIR}/lexer.cpp)

add_executable(LEXER_GUI_SAMPLE1 ${SRC_DIR}/main.cpp
        ${GEN_DIR}/lexer.cpp
        ${SRC_DIR}/errorHandler.cpp
        ${SRC_DIR}/TokenConstant.h
        ${SRC_DIR}/Token.cpp
        ${SRC_DIR}/Token.h)

include_directories(${GEN_DIR})

target_include_directories(LEXER_GUI_SAMPLE1 PRIVATE ${CMAKE_BINARY_DIR})