#include <iostream>
#include <string>
#include <fstream>
#include "save.h"



//-------(윤교수 컨벤션)
int main()
//-------
{
    // 1,       2,    4,         8
    // char short, long, long long,

    long long num;

    std::cout << "long long의 크기 - " << sizeof num << '\n';
    save("소스.cpp");
}
