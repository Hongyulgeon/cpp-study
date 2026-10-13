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
    const int NUM{ 1000 }; //
    int num[NUM];

    //랜덤 값으로 채운다
    for (int i = 0;i < NUM;++i){
        num[i] = uid(dre);
    }
    //랜덤 값을 출력한다
    for (int i = 0;i < NUM;++i){
        std::cout << std::format("{:4}", num[i]) << ' ';
    }
    std::cout << '\n';
    //[문제] 찾을 값을 물어보자
    // 있다면 몇 번쨰 있는 값인지
    // 없다면 없는 값이라고 출력하라.

    while (true) {
        std::cout << "찾을 값이 무엇입니까" << '\n';
        int findNum;
        std::cin >> findNum;


        bool flag{ false };       //두가지 값을 표현하는 자료형 false 발음은 폴스
        for (int i = 0;i < NUM;++i) {
            if (num[i] == findNum) {
                flag = true;
                std::cout << i + 1 << "에서 " << findNum << "을 찾았다" << '\n';
                break;
            }
        }
        // 찾고 나서 이곳으로 탈출
        // 못 찾아도 여기로
        //if (not flag)  이런 코딩을 더 많이 함
        if (flag == false) {
            std::cout << "없는 값입니다" << '\n';
        }
    }

    save("소스.cpp");
}
