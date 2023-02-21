cmake_minimum_required(VERSION 3.5)

project(lab01 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(
)

set(
	HEADERS
	../qcustomplot/qcustomplot.h
	mainwindow.hpp
	random.hpp
	simulate.hpp
)

set(
	SOURCES
	../qcustomplot/qcustomplot.cpp
	mainwindow.cpp
	random.cpp
	simulate.cpp
)

set(
	FORMS
	mainwindow.ui
)

add_compile_options(-std=c++11)

set(Qt "/usr/local/opt/qt@5/5.15.2/")
set(Qt "/usr/local/opt/qt@5/5.15.2/" CACHE PATH "Initial cache" FORCE)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS PrintSupport REQUIRED)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES} ${FORMS} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Widgets)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::PrintSupport)
