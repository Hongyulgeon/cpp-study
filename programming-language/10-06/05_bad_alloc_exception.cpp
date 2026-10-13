#include <iostream>
#include "save.h"

//동적 메모리 할당


//-------
int main()
//-------
{
   //메모리 요청
    while (true) {
        try {
            int* p;
            p = new int[250'000'000];
        }
        catch (std::exception&e) {    // ... -> ellipses 타원들
            std::cout << "메모리 고갈" << e.what() << "\n";
            break;
        }
    }
    save("소스.cpp");
}
