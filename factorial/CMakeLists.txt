set(GTEST_ROOT ${PROJECT_SOURCE_DIR}/googletest)
include_directories(
    ${GTEST_ROOT}/googletest/include
)
add_executable(factorial_test factorial_test.cpp factorial.cpp)
target_link_libraries(factorial_test
    -pthread
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest.a
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest_main.a
)
