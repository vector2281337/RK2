#include "Theme.h"
#include <gtest/gtest.h>

TEST(ThemeTest, WhiteTheme) {
    WhiteTheme theme;
    EXPECT_EQ(theme.Name(), "White Theme");
    auto color = theme.WallColor();
    EXPECT_EQ(color.R, 255);
    EXPECT_EQ(color.G, 255);
    EXPECT_EQ(color.B, 255);
}

TEST(ThemeTest, DarkTheme) {
    DarkTheme theme;
    EXPECT_EQ(theme.Name(), "Dark Theme");
    auto color = theme.WallColor();
    EXPECT_EQ(color.R, 0);
    EXPECT_EQ(color.G, 0);
    EXPECT_EQ(color.B, 0);
}

TEST(ThemeTest, CustomTheme) {
    CustomTheme theme("Test", {1,2,3}, {4,5,6}, {7,8,9});
    EXPECT_EQ(theme.Name(), "Test");
    auto wall = theme.WallColor();
    EXPECT_EQ(wall.R, 1);
    EXPECT_EQ(wall.G, 2);
    EXPECT_EQ(wall.B, 3);
}
