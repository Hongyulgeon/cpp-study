#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <print>
#include <format>
#include <limits>
#include "save.h"


void change(int x, int y);

// 내가 이해한 내용
// 위에 라이프 사이클때매? a랑 b가 안바뀐것을 포인터는 주소자체에 접속하기때문에
// 라이프 사이클 이런거에 관계없이 접근가능하다(막강함)

//-------()
int main()
//-------
{
    int num{ 2026 };            //num의 주소 100번지

    int* p = &num;              // p'에' 100번지가 저장됨

    *p = 929;                   // 100번지의 값을 929로 바꿈

    std::cout << num << '\n';   //출력되는 값은 - 929
    //사실 num = 929;먼 하면되는데 왜 포인터 쓰지 이런식으로 의문을 가져야함


    save("소스.cpp");
}
