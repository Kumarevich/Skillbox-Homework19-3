#include <iostream>
#include <fstream>

int main() {
    std::ifstream statement;
    statement.open("..\\Statement.txt");
    if (!statement.is_open()) {
        std::cout << "File open error!";
        return 666;
    }
    std::string name[2] = {" ", " "};
    std::string surname[2] = {" ", " "};
    std::string date[2] = {" ", " "};
    int salary[2] = {0, 0};
    int result = 0;
    while (!statement.eof()) {
        statement >> name[1];
        statement >> surname[1];
        statement >> salary[1];
        statement >> date[1];
        result += salary[1];
        if (salary[1] > salary[0]) {
            salary[0] = salary[1];
            name[0] = name[1];
            surname[0] = surname[1];
            date[0] = date[1];
        }
    }

    std::cout << "Total payments: " << result << std::endl;
    std::cout << "Maximum payment: " << name[0] << " " << surname[0] << " " << salary[0] << " " << date[0] << std::endl;
    return 0;
}
