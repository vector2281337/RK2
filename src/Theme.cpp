#include "Theme.h"
#include <string>

Color::Color(std::uint8_t R, std::uint8_t G, std::uint8_t B) : R(R), G(G), B(B) {}

std::string Color::ToString() const
{
    return "RGB(" + std::to_string(R) + "," + std::to_string(G) + "," + std::to_string(B) + ")";
}

std::string WhiteTheme::Name() const { return "White Theme"; }
Color WhiteTheme::WallColor() const { return { 255, 255, 255 }; }
Color WhiteTheme::FloorColor() const { return { 255, 255, 255 }; }
Color WhiteTheme::CeilingColor() const { return { 255, 255, 255 }; }

std::string DarkTheme::Name() const { return "Dark Theme"; }
Color DarkTheme::WallColor() const { return { 0, 0, 0 }; }
Color DarkTheme::FloorColor() const { return { 0, 0, 0 }; }
Color DarkTheme::CeilingColor() const { return { 0, 0, 0 }; }

CustomTheme::CustomTheme(std::string name, Color wallColor, Color floorColor, Color ceilingColor)
    : name_(std::move(name)), wallColor_(wallColor), floorColor_(floorColor), ceilingColor_(ceilingColor)
{}

std::string CustomTheme::Name() const { return name_; }
Color CustomTheme::WallColor() const { return wallColor_; }
Color CustomTheme::FloorColor() const { return floorColor_; }
Color CustomTheme::CeilingColor() const { return ceilingColor_; }
