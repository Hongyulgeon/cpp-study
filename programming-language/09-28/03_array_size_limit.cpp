#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <print>
#include <format>
#include <limits>
#include "save.h"





//-------
int main()
//-------

{
    // num의 값을 1부터 시작하는 정수값으로 채운다
    // 그리고 앞에서부터 100개의 값과
    // 뒤에서 부터 100개의 화면에 출력하였다.
    // [문제] NUM의 값을 키웠을때
    // 가능한 숫자는 무엇인가
    // 프로그램이 제대로 실행되는 가능한 숫자는 무엇인가?
    const int NUM{ 1000 };
    int num[NUM];

    for (int i = 0;i < 1000;++i)
        num[i] = i + 1;

    //앞에서 100개
    for (int i = 0;i < 100;++i) {
        std::cout << num[i] << ' ';
    std::cout << '\n';
    }
    //뒤에서 100개
    for (int i = 0;i < 100;++i)
        std::cout << num[NUM - 1 - i] << ' ';
    std::cout << '\n';


    save("소스.cpp");
}
