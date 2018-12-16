set(GTEST_ROOT ${PROJECT_SOURCE_DIR}/googletest)
include_directories(
    ${GTEST_ROOT}/googletest/include
)
add_executable(prime_test prime_test.cpp prime.cpp)
target_link_libraries(prime_test
    -pthread
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest.a
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest_main.a
)
