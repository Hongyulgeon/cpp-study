#include <iostream>
#include <print>
int main()
{
    //[문제} 구구단 전체를 출력하라 (2~9)
    int dan;
    for (int dan = 2; dan <= 9; ++dan) {
        for (int i = 1; i <= 9; i++) {
            std::println("{}* {} = {:2}", i, dan, i * dan);

        }
        std::cout << '\n';
    }
}
