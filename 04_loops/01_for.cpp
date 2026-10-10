#include <iostream>
#include <print>

int main()
{
    //[문제] 1부터 1000까지 정수를 화면에 출력하라
    for (int i = 0; i < 1000; ++i) {
        std::print("{:5}", i + 1);
    }
    std::cout << '\n';
}