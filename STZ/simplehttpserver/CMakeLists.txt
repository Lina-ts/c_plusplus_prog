cmake_minimum_required(VERSION 3.0.0)
project(simplehttpserver VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
find_package(Boost 1.76.0 COMPONENTS headers chrono system)

add_executable(
	simplehttpserver
	main.cpp
)

#if(Boost_FOUND)
	include_directories(${Boost_INCLUDE_DIRS})
	target_link_libraries(simplehttpserver PUBLIC Boost::chrono)
	#endif()

