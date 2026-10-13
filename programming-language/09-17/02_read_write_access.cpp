#include <iostream>
#include <string>
#include <fstream>
#include "save.h"



//-------(윤교수 컨벤션)
int main()
//-------
{
    int num; //컴푸터야 sizeof int 만큼 메모리를 줘!
             //그 메모리를 num이라는 이름으로 읽고 쓰게 해 줘!
             //이런식으로 돌아가는 구조를 폰 노이만 구조라고 부른다.

    num = 20260917; //write access -> assignment(대입, 할당, 배정)

    std::cout << num << '\n'; //read access


    save("소스.cpp");
}
