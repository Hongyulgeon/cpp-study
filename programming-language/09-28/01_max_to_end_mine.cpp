#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <print>
#include <format>
#include <limits>
#include "save.h"

std::default_random_engine dre;
std::uniform_int_distribution uid{ 1 , 6 };



//-------(윤교수 컨벤션)
int main()
//-------

{

    int p = 0;
    int q = 0;
    int num[10]{ 8 , 4, 2, 6, 9, 1, 3, 7, 5 ,0 };
    int maxval = num[0];
    for (int a : num)                                       // range for 범위
        std::cout << a << ' ';
    std::cout << '\n';
    for (int i = 0;i < 10;++i) {
        if (num[i] > maxval) {
             p = num[i] ;
             q = i;
        }
    }
    num[q] = num[9];
    num[9] = p;
    std::cout << " 변경 함" << '\n';
    for (int a : num)                                       // range for 범위
        std::cout << a << ' ';
    std::cout << '\n';
    save("소스.cpp");
}
