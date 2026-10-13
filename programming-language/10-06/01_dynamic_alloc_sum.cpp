#include <iostream>
#include "save.h"

//동적 메모리 할당
// 중간고사 시험 날짜:10월 27일


//-------
int main()
//-------
{
    //[문제] 사용자의 원하는 숫자(자연수)를 입력받아
    // 그 숫자만큼 int값을 저장할 메모리를 확보하라.
    // 그 메모리의 값을 1부터 시작하는 정수로 채워라
    // int 값의 합계를 화면에 출력하라

    std::cout <<"int 몇 개 만들까요?" << '\n';
    unsigned int num;               //양수만 쓰게 0포함 size_t num; 이것도
    std::cin >> num;

    // run time에 결정되는 메모리 -> 동적 메모리 (dynamic momory) 할당(allocation)
    // 시스템에 사용할 메모리요청
    int* p;
    p = new int[num];

    for (int i = 0;i < num;++i) {
        p[i] = i + 1;
    }

    int sum{};
    for (int i = 0;i < num; ++i) {
        sum += p[i];
    }

    std::cout << "1부터" << num << "까지의 합계 - " << sum << '\n';

    save("소스.cpp");
}
