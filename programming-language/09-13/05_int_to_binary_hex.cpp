#include <iostream>
#include <string>
#include <fstream>
#include <print>
#include <numeric>
#include <bitset>
#include "save.h"

//using namespace std; 절대 사용 x
// cout << "namespace std 사용" << endl

//자료형과 변수
// 앞으로는 namespace std를 열어 놓고 강의함 - 학생들은 절대 이렇게 하면 안됨
//  -->강의의 가독성을 위해서
//-------(윤교수 컨벤션)
int main()
//-------
{
    //[문제] int값을 입력하면 2진수 16진수로 출력하라
    while ( true )  {
        std::cout << "int 값을 입력하시오" << '\n';
        int num;
        std::cin >> num;

        std::bitset<sizeof(int) * 8>bit = num;
        std::cout << "num는  2진수로 - 0b" << bit << '\n';
        std::cout << "num는 16진수로 - 0x " << std::hex << num << '\n';
    }
    save("소스.cpp");
}
