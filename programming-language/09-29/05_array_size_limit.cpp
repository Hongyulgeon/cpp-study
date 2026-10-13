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

const int NUM{ 10000 };
//-------()
int main()
//-------
{
    //[뮨제] NUM은 얼마까지 가능한가?
    int a[NUM];

    for (int i = 0;i < NUM;++i) {
        a[i] = i + 1;
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
