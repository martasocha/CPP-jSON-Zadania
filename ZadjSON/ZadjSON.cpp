#include "json.hpp"
#include <iostream>
using json = nlohmann::json;
#include <fstream>

int main()
{
    json j;
    j["name"] = "Marta";
    j["surname"] = "Socha";
    j["date of birth"] = "31.08.1988";

    std::ofstream o("me.json");
    o << j << std::endl;


}

