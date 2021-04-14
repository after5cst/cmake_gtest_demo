#include <gtest/gtest.h>
#include "example/example.h"

TEST(ExampleTest, AddTest)
{
    EXPECT_EQ(Add(2, 2), 4);
}
