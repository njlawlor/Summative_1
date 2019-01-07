#include "test.h"
#include "MathOperation.h"

void TestAddTwoNumber(int firstNumber, int secondNumber){
	int expectedResult = firstNumber + secondNumber;

	if (expectedResult == AddTwoNumber(firstNumber, secondNumber)){
		std::cout << "TestAddTwoNumber passed" << std::endl;
	}
	else{
		std::cout << "TestAddTwoNumber failed" << std::endl;
	}

}
void TestSubtractTwoNumber(int firstNumber, int secondNumber){
	int expectedResult = firstNumber - secondNumber;
	if (expectedResult == SubtractTwoNumber(firstNumber, secondNumber)){
		std::cout << "TestSubtractTwoNumber passed" << std::endl;
	}
	else{
		std::cout << "TestSubtractTwoNumber failed" << std::endl;
	}
}