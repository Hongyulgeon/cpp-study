#include <iostream>
#include "save.h"

const int NUM{ 100000 };
int a[NUM];
//함수이름이 다른데 인자가 다르다면 컴파일러는 어떤 함수를 호출하는지 구분할 수 있다
//funtion overloading
void change(int*, int*);        //C언어의 해결
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

    int num{ 2026 };

    int& r = num;

    r = 1001;

    std::cout << num << '\n';
    save("소스.cpp");
}
