add_library(algo STATIC algo.h algo.cpp)
target_link_libraries(algo PUBLIC bar buzz foo)
