#include <iostream>
#include <string>
#include <fstream>
#include <print>
#include "save.h"



//-------(윤교수 컨벤션)
int main()
//-------
{
    //[문제] int의 가장 큰 값을 출력하라.

    int num = 0B01111111'11111111'11111111'11111111;
    std::cout << "int의 max - " << num << '\n';

    int num1 = 0B11111111'11111111'11111111'11111111;
    std::cout << "int의 lesat - " << num1 << '\n';
    save("소스.cpp");
}
