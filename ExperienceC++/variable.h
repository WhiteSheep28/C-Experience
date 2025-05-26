#pragma once
#include <iostream>

using namespace std;

//Class
class Animal
{
	//공용 멤버 변수 
private:
	char m_name[5];
	int m_age;
	int m_strong;
	int m_test;

	//정적 멤버 변수
	static int m_AllAnimal;

public:
	//생성자
	Animal();

	Animal(int a, int b, int c);

	//소멸자
	~Animal();

	//멤버 함수
	void SetAnimal();

	static void AnimalPlus(int a);
	void AnimalName(string a);
	void AnimalAge(int m_age);
	void bark();
	static int AnimalReturn();

	void SetTest(int a);
	int GetTest();
};