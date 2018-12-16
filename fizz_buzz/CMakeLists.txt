set(GTEST_ROOT ${PROJECT_SOURCE_DIR}/googletest)
include_directories(
    ${GTEST_ROOT}/googletest/include
)
add_executable(fizz_buzz_test fizz_buzz_test.cpp fizz_buzz.cpp)
target_link_libraries(fizz_buzz_test
    -pthread
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest.a
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest_main.a
)
