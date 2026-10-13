#include <iostream>
#include <string>
#include "save.h"


int 오름(const void*, const void*);

//-------
int main()
//-------
{
    save("소스.cpp");


    int* p;

    //C++에서 사용하지 않으셨으면 하는 자료형
    // T* --> 원시 포인터(raw pointer)
    // 추천 --> 스마트 포인터( unique_ptr , shared_Ptr)

    p = new int;
    *p = 20261008;
    std::cout << *p << '\n';

    delete p;

    delete p; // 즉사
}
