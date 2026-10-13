#include <iostream>
#include <string>
#include <fstream>
#include <print>
#include <numeric>
#include <bitset>
#include "save.h"

int gnum;
int main()
//-------
{

    {
        {
            {
            double c;
            std::cout << "지역 변수    c의 주소 -" << std::addressof( c ) << '\n';

            }
        }
    }
    save("소스.cpp");

    //지역변수와 전역변수의 주소를 출력해 봅니다.
    int num;

    std::cout << "지역 변수  num의 주소 - " << std::addressof( num ) << '\n';
    std::cout << "전역 변수 gnum의 주소 -" << std::addressof( gnum ) << '\n';
    std::cout << "메인 함수 main의 주소 -" << std::addressof( main ) << '\n';
}
