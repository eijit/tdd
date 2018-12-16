#include <gtest/gtest.h>
#include "factorial.h"

TEST(FactorialTest, Factorial1)
{
    ASSERT_EQ(1, factorial(1));
}
