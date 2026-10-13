#include <iostream>
#include <string>
#include "save.h"


int 오름(const void*,const void* );

//-------
int main()
//-------
{
    save("소스.cpp");


    std::string s{ "quick brown fox jumps over the lazy dog"};


    //[문제] qsort를 사용하여 s를 오름차순으로 정렬하라.
    // s[0]은 시작글자 'q'
    // s에 들어있는 글자의 개수는 s.size();

    std::cout << s << '\n';

    std::cout << "정렬 시작" << '\n';
    qsort(&s[0], s.size(), sizeof(char), 오름);

    std::cout << s << '\n';


}
int 오름(const void* a,const void* b)
{
    return *(char*)a - *(char*)b;
}
