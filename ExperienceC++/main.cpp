#include <iostream>
#include "variable.h"
using namespace std;

//정적 멤버 변수 초기화
int Animal::m_AllAnimal = 0;

int main(void)
{
	int nDogAge = 0;
	int nInputTest = 0;

	//중복 생성자 확인용 변수
	int a = 0, b = 0, c = 0;

	//객체 (2개 생성)
	Animal Dog, Tiger, Test;
	cout << endl;

	//중복객체 생성
	Animal::Animal(a, b, c);
	cout << endl;

	//멤버 함수 접근
	Dog.SetAnimal();
	Animal::AnimalPlus(1);
	Dog.AnimalName("아랑");
	Dog.AnimalAge(5);
	Dog.bark();

	Tiger.SetAnimal();
	Animal::AnimalPlus(1);
	Tiger.AnimalName("어흥");
	Tiger.AnimalAge(10);
	Tiger.bark();

	cout << "총 동물의 수 : " << Animal::AnimalReturn();
	cout << endl;

	cout << "아무 숫자나 입력해 주세요" << endl;
	cin >> nInputTest;
	Test.SetTest(nInputTest);
	cout << Test.GetTest();
}