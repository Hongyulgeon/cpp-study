#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <print>
#include <format>
#include "save.h"

std::default_random_engine dre;
std::uniform_int_distribution uid{ 1 , 999 };
// 많은 자료가 있다 뭘 할 수 있나
//-------(윤교수 컨벤션)
int main()
//-------
{




    int num[10000];

    //랜덤 값으로 채운다
    for (int i = 0;i < 1000;++i) {
        num[i] = uid(dre);
    }
    //랜덤 값을 출력한다
    for (int i = 0;i < 1000;++i){
        std::cout << std::format("{:4}", num[i]) << ' ';
    }
    //[문제] 가장 큰 수를 찾아 화면에 출력하라 (알고리즘임)
    std::cout << '\n';
    std::cout << "가장 큰 수를 찾는 프로그램입니다" << '\n';
    std::cout << "화면의 1000개의 수 중에서 가장 큰 값을 찾습니다" << '\n';
    std::cout << "키를 누르면 시작합니다" << '\n';
    int p = 0;
    for (int i = 0;i < 1000;++i) {
        if (num[i] > p) {
            p = num[i];
        }
    }
    std::println("가장큰 수는 {}입니다.", p);

    save("소스.cpp");
}
