#include <iostream>
#include <string>
#include <fstream>
#include "save.h"



// 간접 참조: 값이 위치한 메모리 주소(포인터)를 먼저 거친 뒤,
//            그 주소가 가리키는 실제 메모리 공간의 값에 접근한다.

//-------(윤교수 컨벤션)
int main()
//-------
{
    //[문제] int 값 100개를 저장할 배열을 만들어라.
    // 값을 1부터 100 으로 채워라
    // 전체를 화면에 출력하라.



    int num[100]{ 0, };                //남떕된 코드
    for (int i = 0;i < 100;++i) {
        num[i] = i + 1;
    }

    for (int i = 0;i < 100;++i){
        std::cout << num[i] << ' ';
    }
    save("소스.cpp");
}
