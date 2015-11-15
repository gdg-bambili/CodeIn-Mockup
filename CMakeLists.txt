
PROJECT (gdg-example-projects)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.1)

SET(addition_app_src
  addition.cpp
)


add_executable(addition ${addition_app_src})