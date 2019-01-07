#include <conio.h>
#include "test.h"

int main(){
	int firstNumber = 5;
	int secondNumber = 10;
	enum EIntersections
	{
		INTERSECTION_NONE,
		INTERSECTION_ONE,
		INTERSECTION_TWO
	};
	TestAddTwoNumber(firstNumber, secondNumber);
	TestSubtractTwoNumber(firstNumber, secondNumber);

	_getch();
	return 0;
}
