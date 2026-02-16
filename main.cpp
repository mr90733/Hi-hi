#include <iostream>

#include "src/hello.hpp"

int main()

{
    std::string input1, input2;

    std::cout << "First String: ";

    std::getline(std::cin, input1);

    std::cout << "Second String: ";

    std::getline(std::cin, input2);

    int result = strcmp_case_insensitive(input1, input2);

    if (result < 0) std::cout << "First String < Second String\n";

    else if (result == 0) std::cout << "The strings are =\n";

    else std::cout << "First String > Second String\n";

    return 0;
}