#include "House.h"
#include <iostream>

House::House(std::shared_ptr<Theme> theme) : theme_(std::move(theme)) {}

void House::ChangeTheme(std::shared_ptr<Theme> const& theme)
{
    std::cout << Name() << " changes theme to '" << theme->Name() << "'." << std::endl;
    theme_ = theme;
}

void House::ShowDescription() const
{
    std::cout << Name() << " with theme('" << theme_->Name() << "')." << std::endl;
}

std::string OneRoom::Name() const { return "One Room"; }
std::string Apartment::Name() const { return "Apartment"; }
std::string Castle::Name() const { return "Castle"; }
