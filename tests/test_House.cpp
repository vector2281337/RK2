#include "House.h"
#include <memory>
#include <gtest/gtest.h>

TEST(HouseTest, OneRoom) {
    OneRoom room(std::make_shared<WhiteTheme>());
    EXPECT_EQ(room.Name(), "One Room");
}

TEST(HouseTest, Apartment) {
    Apartment apartment(std::make_shared<DarkTheme>());
    EXPECT_EQ(apartment.Name(), "Apartment");
}

TEST(HouseTest, Castle) {
    // Create the colors first
    Color wall(1,1,1);
    Color floor(2,2,2);
    Color ceiling(3,3,3);
    
    // Create shared_ptr explicitly
    auto customTheme = std::shared_ptr<CustomTheme>(
        new CustomTheme("Test", wall, floor, ceiling)
    );
    
    Castle castle(customTheme);
    EXPECT_EQ(castle.Name(), "Castle");
}
