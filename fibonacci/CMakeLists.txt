set(GTEST_ROOT ${PROJECT_SOURCE_DIR}/googletest)
include_directories(
    ${GTEST_ROOT}/googletest/include
)
add_executable(fibonacci_test fibonacci_test.cpp fibonacci.cpp)
target_link_libraries(fibonacci_test
    -pthread
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest.a
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest_main.a
)
