#include "Color.h"
#include <gtest/gtest.h>

TEST(ColorTest, ConstructionAndValues) {
    Color c(10, 20, 30);
    EXPECT_EQ(c.R, 10);
    EXPECT_EQ(c.G, 20);
    EXPECT_EQ(c.B, 30);
}

TEST(ColorTest, ToString) {
    Color c(1, 2, 3);
    EXPECT_EQ(c.ToString(), "RGB(1,2,3)");
}
