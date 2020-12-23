include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.10.0
)
FetchContent_MakeAvailable(googletest)

add_executable(unit_test algo_test.cpp simple_test.cpp)
target_link_libraries(unit_test PUBLIC gtest gtest_main)
target_link_libraries(unit_test PUBLIC algo)

add_test(MyTest unit_test)  # To run tests use: "cmake .. && cmake --build . && ctest ."
