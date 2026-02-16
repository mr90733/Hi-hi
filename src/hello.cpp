#include "hello.hpp"

#include <cctype>

#include <string>


char toLowerChar(char c)

{
    return std::tolower(static_cast<unsigned char>(c));
}

int strcmp_case_insensitive(const std::string& str1, const std::string& str2)

{
    size_t i = 0;

    while (i < str1.size() && i < str2.size())

        {
        char c1 = toLowerChar(str1[i]);

        char c2 = toLowerChar(str2[i]);

        if (c1 != c2)

        {
            return c1 - c2;
        }

        ++i;
    }

    if (str1.size() == str2.size()) return 0;

    else if (str1.size() < str2.size()) return -1;

    else return 1;
}