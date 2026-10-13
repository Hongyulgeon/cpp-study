#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <print>
#include <format>
#include <limits>
#include "save.h"


void change(int* x, int* y);

//-------()
int main()
//-------
{
    int a = 1;
    int b = 2;
    change(&a, &b);

    std::cout << a << " , " << b << '\n';

    save("소스.cpp");
}
void change(int* x, int* y)
{
    int temp{ *x };           // 여기서 *은 dereference operator 역참조 연산자
    *x = *y;
    *y = temp;
}
