#include <iostream>
#include <string>
#include <fstream>
#include "save.h"


//-------
int main()
//-------
{
    //[문제] 몇 단을 원하는 지 입력받아 다음과 같이 출력하라

    // 몇 단? 3
    // 3 * 1 = 3
    // 3 * 2 = 6
    //중략
    // 3 * 9 = 27

    std::cout << "구구단 중에서 원하는 단을 출력합니다" << '\n';
    std::cout << " 몇 단?";
    int dan;
    std::cin >> dan;

    for (int i = 1;i <= 9;++i) {
        int gugu = (dan * i);
        std::cout << i << "단:" << dan << " x "<< i << " = " << gugu << '\n';
    }

    save("소스.cpp");
}
