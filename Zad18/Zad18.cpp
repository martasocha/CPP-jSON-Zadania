#include <iostream>
#include "json.hpp"
using json = nlohmann::json;

//std::ifstream ifs("test.json");
//json jf = json::parse(ifs);
//std::string str(R"({"json": "beta"})");
//json js = json::parse(str);

int main()
{
    std::string jsonString(R"({
    "company":{
        "employee":{
           "name":"Stefan",
           "payroll" : {
                "salary":1500,
                "bonus" : 800
            }
        }
    }
})");

    json js = json::parse(jsonString);
    json employee = js["company"]["employee"];
    std::string employeeName = employee["name"];
    int salary = employee["payroll"]["salary"];
    int bonus = employee["payroll"]["bonus"];

    std::cout << "Zarobki pracownika: " << employeeName << ": " << salary + bonus << std::endl;
}