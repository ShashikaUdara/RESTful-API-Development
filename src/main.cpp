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

    // Add character to the DB
    // mhandler.AddCharacterToDb("Donkey Kong", "large", 0);
    // mhandler.AddCharacterToDb("Mario", "medium", 0);
    // mhandler.AddCharacterToDb("Dry Bones", "small", 0);

    // updating charcter from the DB
    // bool result = mhandler.UpdateWins("6276179d784bb60b906b4042");
    // print_result(result, "update");
    // result = mhandler.UpdateWins("62761874c7ee2a652e083452");
    // print_result(result, "update");
    // when we use an ID which doesen't exist
    // result = mhandler.UpdateWins("62761874c7ee2a652e083457");
    // print_result(result, "update");

    // removing charactor from the DB
    bool result = mhandler.RemoveCharacterFromDb("62761874c7ee2a652e083452");
    print_result(result, "delete");
    // when we use an ID which doesen't exist
    result = mhandler.RemoveCharacterFromDb("62761874c7ee2a652e083457");
    print_result(result, "delete");
}