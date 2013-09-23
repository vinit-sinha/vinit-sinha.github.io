#include <iostream>
#include <thread>
#include "core/charset/basic_source/basic_source_encoding.h"

int main()
{
    namespace encoding = vinks::core::charset::basic_source;
    std::cout << std::boolalpha
        << "is space(32): " << encoding::is_representable_as_space_char(32) <<std::endl
        << "is space(' '): " << encoding::is_representable_as_space_char(' ') << std::endl
        << "is space(100): " << encoding::is_representable_as_space_char(100) << std::endl
        << "is space('1'): " << encoding::is_representable_as_space_char('1') << std::endl;
    return 0;
}
