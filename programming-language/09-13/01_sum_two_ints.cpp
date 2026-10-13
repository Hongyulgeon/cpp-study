#include <iostream>
#include <string>
#include <fstream>
#include <print>
#include "save.h"



//-------(윤교수 컨벤션)
int main()
//-------
{
    //int 값 2개를 입력 받아 합계를 출력하라.
    while (true) {
        int a{ }, b{ };
        std::cout << "정수를 2개를 입력해주십시오." << '\n';
        std::cin >> a >> b;
        std::println("정수의 합:{} + {} = {}", a, b, a + b);
    }
    save("소스.cpp");
}
