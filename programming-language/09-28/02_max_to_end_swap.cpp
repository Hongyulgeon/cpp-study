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


    int num[10]{ 8 , 4, 2, 6, 9, 1, 3, 7, 5 ,0 };
    int maxval = num[0];
    for (int a : num)
        std::cout << a << ' ';
    std::cout << '\n';
    // [문제] 가장 큰 수를 제일 오른쪽으로 이동시켜라.
    for (int i = 0; i < 10 - 1;++i) {
        if (num[i] > num[i + 1]) {
            int temp{ num[i] };
            num[i] = num[i + 1];
            num[i + 1] = temp;
        }
    }
    for (int a : num)
        std::cout << a << ' ';
    std::cout << '\n';


    save("소스.cpp");
}
