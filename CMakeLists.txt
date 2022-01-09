cmake_minimum_required(VERSION 3.17)
project(
  matcha VERSION 0.0
  DESCRIPTION "Attachable Machine Learning"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)

find_package(Argxx)
find_package(matcha-core)

add_library(${PROJECT_NAME} SHARED)

target_include_directories(
  ${PROJECT_NAME}
  PRIVATE
    include/
)

target_link_libraries(${PROJECT_NAME} matcha-core)
target_link_libraries(${PROJECT_NAME} Argxx)

target_sources(
  ${PROJECT_NAME}
  PRIVATE
    src/bits_of_matcha/model.cpp

    src/bits_of_matcha/estimator/neuralnetwork.cpp
    src/bits_of_matcha/nn/layer/linear.cpp

    src/bits_of_matcha/estimator/ensemble.cpp
)


add_executable(main src/main.cpp)

target_include_directories(
  main
  PRIVATE
  include/
)

target_link_libraries(main PRIVATE ${PROJECT_NAME})