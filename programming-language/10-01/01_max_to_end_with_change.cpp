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

const int NUM{ 10 };

void change(int*, int*);
//-------()
int main()
//-------
{

    int a[NUM];
    int num[]{0};
    for (int i = 0;i < NUM;++i) {
        a[i] = uid(dre);
    }
    for (int i = 0; i < NUM;++i) {
        std::print("{:8}", a[i]);
    }
    std::cout << '\n';
    std::cout << '\n';

    //[뮨제] 가장 큰 값을 가장 뒤로 옮겨봐라
     //비교 로직
    for (int i = 0;i < NUM - 1;++i) {
        if (a[i] > a[i + 1]) {
            change(&a[i], &a[i + 1]);
        }
    }

    for (int i = 0; i < NUM;++i) {
        std::print("{:8}", a[i]);
    }
    std::cout << '\n';


    save("소스.cpp");
}

void change(int* p, int* q)
{
    int temp{ *p };
    *p = *q;
    *q = temp;
}
