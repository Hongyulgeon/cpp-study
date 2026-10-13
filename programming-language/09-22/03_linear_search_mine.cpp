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
    std::cout << '\n';
    //[문제] 찾을 값을 물어보자
    // 있다면 몇 번쨰 있는 값인지
    // 없다면 없는 값이라고 출력하라.
    int p = 0;
    std::cout << "찾을 값이 무엇입니까" << '\n';
    std::cin >> p;
    for (int i = 0;i < 1000;++i) {
        if (num[i] == p) {
            std::println("{}을 {}번째에서 찾았습니다.", p, i);
        }
        else if (num[i] != p) {
            std::cout << "값을 찾을 수 없습니다." << '\n';
            break;
        }
    }


    save("소스.cpp");
}
