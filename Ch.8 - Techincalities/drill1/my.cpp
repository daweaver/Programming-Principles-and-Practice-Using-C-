// defines functions found in my.h
#include "my.h"
#include "../std_lib_facilities.h"

int foo{};

void print_foo()
{
    std::cout << foo << std::endl;
}

void print(int i)
{
    std::cout << i << std::endl;
}