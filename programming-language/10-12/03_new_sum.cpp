//C++에서 new는 프로그램 실행 중에(런타임에) 필요한 만큼의 메모리를 동적으로 할당하고
// 그 메모리를 가리키는 포인터를 반환하는 연산자이다.

#include <iostream>

int main()
{
	//[문제] 사용자가 입력한 정수 num이라고 하자.
	// int를 num개 만큼 저장할 메모리를 확보하라
	// 메모리의 값을 1부터 num까지 값으로 채워라.
	// 전체 합계를 계산해서 출력하라.

	std::cout << "원하는 int의 개수는?";
	int num;
	std::cin >> num;
	int* p = new int[num] { };   //시스템 요청   ----> 성공시 new는 포인터의 형태로 주소를 반환한다.

	//합계
	int sum{};
	for(int i = 0;i < num;++i) {
		p[i] += (i + 1);           //*(p + i) = p[i] 똑같이 동작한다
		sum += p[i];
	}
		std::cout << sum;
}
