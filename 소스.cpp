#include <iostream>
//함수 선언
void star();
void star2();		


void main()
{	
	 star();
	 star2();
}
	
	
//함수 정의
void star() {
	for (int loopUp = 0; loopUp < 4; loopUp++) //0, 1, 2, 3
	{
		for (int j = 0; j < loopUp; j++)
		{
			std::cout << " ";
		}

		int count = 7 - (loopUp * 2);
		for (int i = 0; i < count; i++) //7, 5, 3, 1
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}
	



	void star2() {
		for (int loopDown = 2; loopDown >= 0; loopDown--) //2, 1, 0
		{
			for (int j = 0; j < loopDown; j++)
			{
				std::cout << " ";
			}

			int count = 7 - (loopDown * 2);  //3, 5, 7
			for (int i = 0; i < count; i++) //7, 5, 3, 1
			{
				std::cout << "*";
			}
			std::cout << std::endl;
		}
	}
	
