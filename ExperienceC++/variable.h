#pragma once
#include <iostream>

using namespace std;

//Class
class Animal
{
	//���� ��� ���� 
private:
	char m_name[5];
	int m_age;
	int m_strong;
	int m_test;

	//���� ��� ����
	static int m_AllAnimal;

public:
	//������
	Animal();

	Animal(int a, int b, int c);

	//�Ҹ���
	~Animal();

	//��� �Լ�
	void SetAnimal();

	static void AnimalPlus(int a);
	void AnimalName(string a);
	void AnimalAge(int m_age);
	void bark();
	static int AnimalReturn();

	void SetTest(int a);
	int GetTest();
};