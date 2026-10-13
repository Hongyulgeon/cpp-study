#include <iostream>
#include <random>
#include <print>
#include "save.h"

std::default_random_engine dre;
std::uniform_int_distribution uid{ 1 , 999'9999  };

int 방법(const void*, const void*);

//-------
int main()
//-------
{
    //[문제] 사용자가 입력한 숫자를 받는다. (200부터 1억 사이) 이래야 문제 오류 X
   // 사용자가 잘못된숫자를 입력하진 않는다고 가정한다.
   // 입력한 숫자를 num이라고 하자
   // int num개를 저장할 메모리를 확보한다.
   // num개의 int 값을 [1,999'9999] 랜덤 값으로 할당하라.
   // 앞에서 부터 100개,역순으로 100개 값을 8칸에 맞추어 화면 출력하라


    std::cout << "원하는 숫자는?";
    int num;
    std::cin >> num;


    int* p;
    p = new int[num];

    for (int i = 0;i < num;++i)
        p[i] = uid(dre);

    int NUM = 100;
    if (num < 100)
        NUM = num;

    // -> qsort를 사용하여 이 메모리를 정렬하겠다.
    std::cout << "정렬 시작";
    qsort(p, num, sizeof(int), 방법);
    std::cout << '\n';


    for (int i = 0;i < NUM;++i)
        std::print("{:8}", p[i]);
    std::cout << '\n';

    std::cout << '\n';
    for (int i = 0;i < NUM;++i)
        std::print("{:8}", p[num - 1 - i]);


    save("소스.cpp");
}

int 방법(const void* p, const void* q)
{
    int* a = (int*)p;
    int* b = (int*)q;

    if (*a > *b)
        return 1;
    else if (*a < *b)
        return -1;

    return 0;
}
