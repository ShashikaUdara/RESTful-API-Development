#pragma once

#include <unordered_map>
namespace learning1
{
    enum class CharacterSize
    {
        kSmall,
        kMedium,
        kLarge,
    };

    std::unordered_map<CharacterSize, const char *> character_size_to_string(
        {
            {CharacterSize::kSmall, "small"},
            {CharacterSize::kMedium, "medium"},
            {CharacterSize::kLarge, "large"},
        }
    );

};   // namespace learning