#pragma once
#include "Theme.h"
#include <memory>
#include <string>

class House
{
public:
    explicit House(std::shared_ptr<Theme> theme);
    virtual ~House() = default;
    virtual std::string Name() const = 0;
    void ChangeTheme(std::shared_ptr<Theme> const& theme);
    void ShowDescription() const;

private:
    std::shared_ptr<Theme> theme_;
};

class OneRoom : public House
{
public:
    using House::House;
    std::string Name() const override;
};

class Apartment : public House
{
public:
    using House::House;
    std::string Name() const override;
};

class Castle : public House
{
public:
    using House::House;
    std::string Name() const override;
};
