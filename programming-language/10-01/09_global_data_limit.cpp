#include <iostream>
#include "save.h"

//전역 데이터 얼마까지 가능?
int a[21'4748'3647/4];       //int의 MAX
int b[21'4748'3647 / 4];
int c[21'4748'3647 / 4];
int d[21'4748'3647 / 4];
int e[21'4748'3647 / 4];

//-------
int main()
//-------
{
    std::cout << "a의 메모리 크기 - " << sizeof a << '\n';
    save("소스.cpp");
}
