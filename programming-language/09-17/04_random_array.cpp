#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <print>
#include <format>
#include "save.h"

std::default_random_engine dre;
std::uniform_int_distribution uid{ 1 , 999 };

//-------(윤교수 컨벤션)
int main()
//-------
{




    int num[1000];
    //랜덤 값으로 채운다
    for (int i = 0;i < 1000;++i) {
        num[i] = uid(dre);
    }
    //랜덤 값을 출력한다
    for (int i = 0;i < 1000;++i){
        std::cout << std::format("{:4}", num[i]) << ' ';
    }
    //[문제] 가장 큰 수를 찾아 화면에 출력하라 (알고리즘임)


    save("소스.cpp");
}
