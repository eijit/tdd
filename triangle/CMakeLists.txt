set(GTEST_ROOT ${PROJECT_SOURCE_DIR}/googletest)
include_directories(
    ${GTEST_ROOT}/googletest/include
)
add_executable(triangle_test triangle_test.cpp triangle.cpp)
target_link_libraries(triangle_test
    -pthread
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest.a
    ${GTEST_ROOT}/build/googlemock/gtest/libgtest_main.a
)
