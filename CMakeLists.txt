cmake_minimum_required(VERSION 3.0.0)

project(StandLight)

add_executable(${PROJECT_NAME}
    ./src/main.cpp
    ./src/hw/Button/Button.cpp
    ./src/hw/Led/Led.cpp
    ./src/app/Listener/Listener.cpp
)

target_include_directories(${PROJECT_NAME}  PUBLIC
    ./src/hw/Button
    ./src/hw/Led
    ./src/app/Listener
)

target_link_libraries(${PROJECT_NAME}   PUBLIC
    -lwiringPi
)

target_compile_options(${PROJECT_NAME}   PUBLIC
    -Wall
)