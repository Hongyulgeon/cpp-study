#include <iostream>
#include <string>
#include <fstream>
#include <format>           //c++ 20
#include <print>            //c++ 23
#include "save.h"


//-------(윤교수 컨벤션)
int main()
//-------
{

    //문제:1부터 1000까지 정수를 화면에 출력하라

    for (int i = 0;i < 1000;++i) {
        std::print("{:4}", i + 1);
   }
    std::cout << '\n';
    save("소스.cpp");
}
