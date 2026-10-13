#include <iostream>
#include "save.h"

//동적 메모리 할당


//-------
int main()
//-------
{
    //[문제] 메모리는 자원이다
    // 획득 - 사용 - 반환 단계를 지켜 사용해야 한다
    // 1GB 씩 연속 할당요청하면 얼마까지 가능한가?
    size_t cnt{ };
    while (true) {
        new int[250'000'000];
        std::cout << ++cnt << "기가 바이트 성공" << '\n';
    }


    save("소스.cpp");
}
