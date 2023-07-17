cmake_minimum_required (VERSION 2.6)
project (sado-composer)
add_library(staticgroup STATIC functions-modal.cpp scales12.cpp)
add_executable(sado-composer sado-composer.cpp)
target_link_libraries(sado-composer staticgroup)



