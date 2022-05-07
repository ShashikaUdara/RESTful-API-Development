#include <iostream>

#include "mongocxx/instance.hpp"

#include "mongodb_handlar.h"
#include "character_size.h"

void print_result(const bool &result, const char* operation)
{
    std::cout<<"The " << operation 
    << (result? " worked." : " didn't worked.") << std::endl;
}

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    std::cout<<"RESTful API Development in C++"<<std::endl;

    mongocxx::instance instance;
    learning::MongoDbHandlar mhandler;

    // mhandler.AddCharacterToDb("Donkey Kong", "large", 0);
    // mhandler.AddCharacterToDb("Mario", "medium", 0);
    // mhandler.AddCharacterToDb("Dry Bones", "small", 0);

    bool result = mhandler.UpdateWins("6276179d784bb60b906b4042");
    print_result(result, "update");
    result = mhandler.UpdateWins("62761874c7ee2a652e083452");
    print_result(result, "update");
}