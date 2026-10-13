#include <iostream>
#include <string>
#include <fstream>
#include <print>
#include <numeric>
#include <bitset>
#include "save.h"

int n;
int main()
//-------
{

    save("소스.cpp");

    //지역변수 라이프 사이클 자세한건 필기 참고
    int n;
    {
        int n;
    }
    for (int n;  ; ){ }

}
