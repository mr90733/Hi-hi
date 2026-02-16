#include "../src/hello.hpp"

#include <iostream>

void test(const std::string& a, const std::string& b, int expected)

{
    int result = strcmp_case_insensitive(a, b);

    std::cout << "Test" << a << "and" << b << ": ";

    if

    ((result < 0 && expected < 0) || (result == 0 && expected == 0) || (result > 0 && expected > 0))

    {

        std::cout << "Correct\n";

    }

    else

    {
        std::cout << "Fail" << result <<"\n";
    }
}

int main()

{
    test("One", "Two", -1);

    test("One", "One", 0);

    test("Two", "Twe", 1);

    test("Hello", "HELLO", 0);

    test("Ric", "Rci", -1);

    test("Camp", "Camping", 1);

    return 0;
}