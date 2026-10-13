#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <print>
#include <format>
#include <limits>
#include "save.h"

int add(int a , int b);


//-------()
int main()
//-------
{

    //[문제] 2개 int 값을 인자로 받아 합계를 돌려주는 함수 add를 작성하라.
    // 다음 코드가 의도한 대로 실행되어야 한다 (살리셈)

    int a{ 2026 }, b{ 922 };

    std::cout << "a의 번지 -" << std::addressof(a) << '\n';
    std::cout << "b의 번지 -" << std::addressof(b) << '\n';

    int sum;



    sum = add(a, b);

    std::cout << sum << '\n';


    save("소스.cpp");
}


int add(int x , int y)
{
    std::cout << "x의 번지 -" << std::addressof(x) << '\n';
    std::cout << "y의 번지 -" << std::addressof(y) << '\n';
    return x + y;
}
