#include <iostream>
#include <string>
#include <fstream>
#include <print>
#include "save.h"



//-------(윤교수 컨벤션)
int main()
//-------
{
    //컴파일러가 구분할 수 있는 최소 문법 요소 - token
    int num;

    // int의 메모리 크기 - at least 2 bytes (기계따라 다른데 최소 2bytes 이상 정해진 숫자가 아니다)
    // tokre 2개 짜리 문장이 아무런 문제가 없다면
    // 왼편은 메모리 달라는 요청이고
    // 오른편은 그 메모리에 붙인 이름이다.

    // 이때 프로그래머는 num에 대하여 다음 3가지 사항을 언제나 확인할 수 있다.
    // 1. num의 크기
    // 2. num의 주소
    // 3. num의 자료형

    std::cout << "num의 크기 - " << sizeof num << '\n';
    std::cout << "num의 주소 - " << std::addressof(num) << '\n';
    std::cout << "num의 자료형 - " << typeid(num).name() << '\n';
    save("소스.cpp");
}
