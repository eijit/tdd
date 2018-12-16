#include <gtest/gtest.h>
#include "fibonacci.h"

TEST(FibonacciTest, Fibonacci1)
{
    ASSERT_EQ(1, fibonacci(1));
}
