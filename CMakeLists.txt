cmake_minimum_required(VERSION 3.10)

project(Markdown-Processor VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
  src/main.cpp
  src/Note.cpp
)

set(HEADERS
  headers/Note.h
)

add_executable(${PROJECT_NAME} ${SOURCES})
