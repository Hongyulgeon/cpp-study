#include <iostream>
#include "save.h"

//STACK은 1MB의 데이터를 사용할 수 있다.       스택 오버플로우 오류코드 0xc00000fd
void f()
{
    char c[1024 * 900 / 10];
    std::cout << "c의 주소 - " << std::addressof(c) << " - " << c[0] << '\n';
    f();
}

//-------
int main()
//-------
{
    f();
    save("소스.cpp");
}
