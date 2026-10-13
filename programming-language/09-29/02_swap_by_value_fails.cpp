#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <print>
#include <format>
#include <limits>
#include "save.h"


void change(int x, int y);

// 값 교환이 일어나지 않는 이유: 값에 의한 호출(Pass by Value)
// change(a, b) 호출 시 a, b의 값(1과 2)이 복사되어 새로운 변수 x, y로 전달된다.
// change 내부의 temp, x, y는 main의 a, b와 메모리 상에서 전혀 다른 독립된 변수이다.

//-------()
int main()
//-------
{

    //[문제] main이 문제없이 의도한대로 실행되도록 함수 change를 코딩하라.
    int a{ 1 }, b{ 2 };

    //change를 호출하였다
    change(a, b);
    std::cout << a << " , " << b << '\n';             //2,1 이렇게 출력되어야


    save("소스.cpp");
}
void change(int x, int y)
{
    int temp{ x };
    x = y;
    y = temp;
}
