cmake_minimum_required(VERSION 3.14)
project(SnakeGame LANGUAGES CXX)

find_package(SFML 2.5.1 COMPONENTS graphics REQUIRED)

add_executable(${PROJECT_NAME} 
    src/Main.cpp 
    src/Util.cpp
    src/Component.cpp
    src/Entity.cpp

    src/components/Sprite.cpp
    src/components/Sprite.hpp
    )

    target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)