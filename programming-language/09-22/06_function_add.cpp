#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <print>
#include <format>
#include <limits>
#include "save.h"

int add(int a , int b);


//-------(윤교수 컨벤션)
int main()
//-------
{

    //[문제] 2개 int 값을 인자로 받아 합계를 돌려주는 함수 add를 작성하라.
    // 다음 코드가 의도한 대로 실행되어야 한다 (살리셈)

    int a{ 2026 }, b{ 922 };
    int add(int a,int b);        //function call operator
    std::cout << a << " + " << b << " = " << add(a, b) << '\n';

    //화면 출력은 이렇게 되어야 - 2026 + 922 = 2948
    save("소스.cpp");
}

//함수 정의 = funtion definiton
int add(int x , int y)
{   // funtion body
    return x + y;
}
