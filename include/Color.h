#pragma once
#include <cstdint>
#include <string>

struct Color
{
    Color(std::uint8_t R, std::uint8_t G, std::uint8_t B);
    std::string ToString() const;
    
    std::uint8_t R, G, B;
};
