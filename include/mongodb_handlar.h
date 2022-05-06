#pragma once

#include <cstdint>
#include <string>

// #include "bsoncxx/builder/stream/document.hpp"

namespace learning
{
    class MongoDbHandlar
    {
        bool AddCharacterToDb(const std::string &character_name,
                              const std::string &size,
                              const int16_t &wins)
        {
            return true;
        }

        bool UpdateWins(const std::string &character_id)
        {
            return true;
        }

        bool RemoveCharacterFromDb(const std::string &character_id)
        {
            return true;
        }
    };
} // nmaespace learning