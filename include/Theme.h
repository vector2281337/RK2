#pragma once
#include "Color.h"
#include <memory>
#include <string>

class Theme
{
public:
    virtual ~Theme() = default;
    virtual std::string Name() const = 0;
    virtual Color WallColor() const = 0;
    virtual Color FloorColor() const = 0;
    virtual Color CeilingColor() const = 0;
};

class WhiteTheme : public Theme
{
public:
    std::string Name() const override;
    Color WallColor() const override;
    Color FloorColor() const override;
    Color CeilingColor() const override;
};

class DarkTheme : public Theme
{
public:
    std::string Name() const override;
    Color WallColor() const override;
    Color FloorColor() const override;
    Color CeilingColor() const override;
};

class CustomTheme : public Theme
{
public:
    CustomTheme(std::string name, Color wallColor, Color floorColor, Color ceilingColor);
    std::string Name() const override;
    Color WallColor() const override;
    Color FloorColor() const override;
    Color CeilingColor() const override;

private:
    std::string name_;
    Color wallColor_, floorColor_, ceilingColor_;
};
