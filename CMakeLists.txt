cmake_minimum_required(VERSION 3.30)
project(school LANGUAGES CXX)

if(POLICY CMP0167)
    cmake_policy(SET CMP0167 OLD)
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add your executable target
add_executable(school
        roka.cpp
)

# Boost
#set(Boost_USE_STATIC_LIBS OFF)
#find_package(Boost REQUIRED)
#target_link_libraries(school PRIVATE Boost::boost)

# GMP
