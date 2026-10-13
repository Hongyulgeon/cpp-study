#include <iostream>
#include "save.h"

const int NUM{ 100000 };
int a[NUM];

void change(int*, int*);              //c언의 해결
void change(int* a, int* b)           //C++에서는 *을 대신하여 &을 사용한다.
{
    int temp{ *a };
    *a = *b;
    *b = temp;
}


//-------
int main()
//-------
{
    int a{ 1 }, b{ 2 };

    change(&a, &b);

    std::cout << a << b << '\n';
    save("소스.cpp");
}
