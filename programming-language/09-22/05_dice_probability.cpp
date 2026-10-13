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


// 많은 자료가 있다 뭘 할 수 있나
// 잘 쓴지는 모르겠는데 일단은 코드 (중요함 복습 필수)
//-------(윤교수 컨벤션)
int main()
//-------
{



    //[문제] 주사위를 10000번 던졌다
    // 주사위 각 눈이 나온 확률을 출력하라

    int num[6] { 0 };
       for (int i = 0;i < 1'0000'0000;++i) {
        if (uid(dre) == 1) {
            ++num[uid(dre) - 1];
        }
    }
       for (int i = 0;i < 6; ++i) {
           std::cout << i + 1 << "의 횟수 - " << num[i]
               << "확률 - " << std::format("{:.2}", static_cast<double>(num[i]) / 1'0000'0000) << '\n';
       }
    save("소스.cpp");
}
