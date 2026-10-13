#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <print>
#include <format>
#include <limits>
#include "save.h"

std::default_random_engine dre;
std::uniform_int_distribution uid{ 1 , 999 };

const int NUM{ 1000 };
//-------()
int main()
//-------
{
    //[뮨제] 가장 큰 값을 가장 뒤로 옮겨봐라
    int a[NUM];
    int num[]{0};
    for (int i = 0;i < NUM;++i) {
        a[i] = uid(dre);
    }
    for (int i = 0;i < NUM;++i) {
        if (a[i] > a[i - 1]) {
            a[i] = num[i-1];
            if (num[i - 1] > num[i + 1]); {
                a[i] = num[i - 1];
            }
        }
    }
    //앞에서부터 100개
    for (int i = 0; i < 100;++i) {
        std::print("{:8}", a[i]);


    }
    std::cout << '\n';
    std::cout << '\n';
    //뒤에서부터 100개
    for (int i = 0; i < 100;++i) {
        std::print("{:8}", a[NUM - 1 -i]);
    }




    save("소스.cpp");
}
