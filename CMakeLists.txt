cmake_minimum_required(VERSION 3.10)
project(SmartEnergyController)

# Set C++ standard to 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# Set the source files
set(SRC_FILES
    src/controller.cpp
    src/energy_source.cpp
    src/energy_strategy.cpp
    src/main.cpp
)

# Main executable
add_executable(SmartEnergyController ${SRC_FILES})

# Add include directory
target_include_directories(SmartEnergyController PUBLIC include/)
