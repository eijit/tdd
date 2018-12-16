#include <gtest/gtest.h>
#include "triangle.h"

TEST(TriangleTest, Triangle111)
{
    ASSERT_EQ(Equilateral, triangle(1, 1, 1));
}
