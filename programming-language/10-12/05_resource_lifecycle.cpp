//C++에서 new는 프로그램 실행 중에(런타임에) 필요한 만큼의 메모리를 동적으로 할당하고
// 그 메모리를 가리키는 포인터를 반환하는 연산자이다.

// C++에서 사용하지 말아야 할 코드
// 1. int a[10];  → T[N];  -->대체 array<T>(N)
// 2. int* p;     → T*;    -->스마트 포인터

#include <iostream>

int main()
{

	size_t cnt{};
	while (true) {
		//자원은 항상 3단계를 거쳐 사용한다
		// 1.확보 2. 사용 3.반환
		char* p = new char[1'000'000'000];               //1단계

		std::cout << p[0];            //2단계

		std::cout << ++cnt << "기가 확보" << '\n';

		delete[] p;                 //반환
	}
}
