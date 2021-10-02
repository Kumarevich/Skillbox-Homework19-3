#include <iostream>
#include <fstream>

int main() {
    std::ifstream statement;
    statement.open("..\\Statement.txt");
    std::string names[20];
    std::string surnames[20];
    std::string dates[20];
    int salary[20];
    int i = 0;
    int result = 0;
    int max = 0;
    int index;
    while (!statement.eof()) {
        statement >> names[i];
        statement >> surnames[i];
        statement >> salary[i];
        statement >> dates[i];
        result += salary[i];
        if (salary[i] > max) {
            max = salary[i];
            index = i;
        }
        ++i;
    }

    std::cout << "Total payments: " << result << std::endl;
    std::cout << "Maximum payment: " << names[index] << " " << surnames[index] << " " << max << " " << dates[index] << std::endl;
    return 0;
}
