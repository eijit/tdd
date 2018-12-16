#include <gtest/gtest.h>
#include "prime.h"

TEST(PrimeTest, Prime1)
{
    ASSERT_FALSE(is_prime(1));
}
