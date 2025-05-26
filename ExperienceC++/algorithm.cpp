#include <iostream>
#include "variable.h"

using namespace std;

Animal::Animal()
{
	cout << "객체가 생성되었습니다" << endl;
	//멤버 변수 호출
	cout << "멤버 변수가 초기화 되었습니다" << endl;
}

Animal::Animal(int a, int b, int c)
{
	cout << "중복생성자 완성";
}

Animal::~Animal()
{
	cout << endl << "객체가 소멸했습니다";
}

void Animal::SetAnimal()
{
	m_AllAnimal = 0;
	m_age = 0;
	m_strong = 0;
	m_test = 0;
}

void Animal::AnimalPlus(int a)
{
	m_AllAnimal = m_AllAnimal + a;
}

void bark()
{
	cout << "Bark!" << endl;
}

void AnimalName(string m_name)
{
	cout << "이 동물의 이름은 : " << m_name;
	cout << endl;
}

void AnimalAge(int m_age)
{
	cout << "이 동물의 나이는 : " << m_age;
	cout << endl;
}

int Animal::GetTest()
{
	return m_test;
}

void Animal::SetTest(int a)
{
	m_test = a;
}

int Animal::AnimalReturn()
{
	return m_AllAnimal;
}