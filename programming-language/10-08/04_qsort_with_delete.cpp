#include <iostream>
#include <random>
#include <print>
#include "save.h"

// 참고만

std::default_random_engine dre;
std::uniform_int_distribution uid{ 1 , 999'9999  };

int 방법(const void*, const void*);

//-------
int main()
//-------
{
    int num = 30;


    int* p;
    p = new int[num];

    for (int i = 0;i < num;++i)
        p[i] = uid(dre);

    qsort(p, num, sizeof(int), 방법);

    delete[] p;

    save("소스.cpp");
}
int 방법(const void* p, const void* q)
{
    return *(int*)p  - *(int*)q;
}
