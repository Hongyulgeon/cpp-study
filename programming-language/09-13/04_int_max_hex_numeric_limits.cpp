#include <iostream>
#include <string>
#include <fstream>
#include <print>
#include "save.h"
#include <numeric>



//-------(윤교수 컨벤션)
int main()
//-------
{
    //[문제] int의 가장 큰 값을 출력하라.

    //int num = 0x7F'FF'FF'FF; //16진수
    //std::cout << num;
    //int num = 0x80'00'00'00; //인트의 최솟값
    //std::cout << num;
    //unsigned int num = 0x7f'ff'ff'ff;
    //std::cout << "unsigned int의 max" << num << '\n';

    ////int num = std::numeric_limits<int>::max(); //최댓값
    //int num = std::numeric_limits<int>::min();  //최솟값
    //std::cout << num;


    save("소스.cpp");
}
