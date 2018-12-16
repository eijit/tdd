#include <gtest/gtest.h>
#include <string>
#include "fizz_buzz.h"

using namespace std;

TEST(FizzBuzzTest, Test3)
{
    string ret = fizz_buzz(3);
    ASSERT_STREQ("Fizz", ret.c_str());
}

TEST(FizzBuzzTest, Test5)
{
    string ret = fizz_buzz(5);
    ASSERT_STREQ("Buzz", ret.c_str());
}

TEST(FizzBuzzTest, Test15)
{
    string ret = fizz_buzz(15);
    ASSERT_STREQ("FizzBuzz", ret.c_str());
}

TEST(FizzBuzzTest, Test4)
{
    string ret = fizz_buzz(4);
    ASSERT_STREQ("4", ret.c_str());
}

TEST(FizzBuzzTest, Test9)
{
    string ret = fizz_buzz(9);
    ASSERT_STREQ("Fizz", ret.c_str());
}

TEST(FizzBuzzTest, Test10)
{
    string ret = fizz_buzz(10);
    ASSERT_STREQ("Buzz", ret.c_str());
}

TEST(FizzBuzzTest, Test30)
{
    string ret = fizz_buzz(30);
    ASSERT_STREQ("FizzBuzz", ret.c_str());
}
