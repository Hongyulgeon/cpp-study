// 10월 12일 다른반 수업
//값이 결정되는 시점 1:compile-time 2:run-time
//

#include <iostream>

int main()
{
	//[문제] 사용자가 입력한 정수 num이라고 하자.
	// int를 num개 만큼 저장할 메모리를 확보하라
	// 메모리의 값을 모두 출력하라.

	std::cout << "원하는 int의 개수는?";
	int num;          //컴파일 시 주소가 정적 할당(주소확정)
	std::cin >> num;
	int a[num];       //num이 실행시킨 후에 몇이 들어갔지 돌려봐야 결정 가능(run-time)
				      //주소가 결정이 안나있기에 a라는 이름을 붙일 수가 없다.

}
