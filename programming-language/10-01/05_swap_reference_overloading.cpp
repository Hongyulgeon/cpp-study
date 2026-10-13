#include <iostream>
#include "save.h"

const int NUM{ 100000 };
int a[NUM];
//함수이름이 다른데 인자가 다르다면 컴파일러는 어떤 함수를 호출하는지 구분할 수 있다
//funtion overloading
void change(int*, int*);
void change(int&, int&);
void change(int& a, int& b)
{
    int temp{ a };
    a = b;
    b = temp;
}


//-------
int main()
//-------
{
    int a{ 1 }, b{ 2 };

    change(a, b);

    std::cout << a << b << '\n';
    save("소스.cpp");
}
