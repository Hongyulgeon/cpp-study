//C++에서 new는 프로그램 실행 중에(런타임에) 필요한 만큼의 메모리를 동적으로 할당하고
// 그 메모리를 가리키는 포인터를 반환하는 연산자이다.
// (참고만)

#include <iostream>

int main()
{
	char* p;
	size_t cnt{};
	while (true) {
		try {
			p = new char[1'000'000'000];       //1gb     //실패시 exception을 throw한다 //실패 가능성
		}
		//...타원들(ellipsis)<--- 인자의 개수가 정해지지 않은 경우를 나타내는 특수 기호
		// exeption
		catch (std::exception& e ) {
			std::cout << e.what() << '\n';   //표준 예외
			return 0;
		}
		std::cout << ++cnt << "기가 확보" << '\n';
		delete[] p;                 //반환
	}
}
