#include <iostream>
#include "variable.h"

using namespace std;

Animal::Animal()
{
	cout << "��ü�� �����Ǿ����ϴ�" << endl;
	//��� ���� ȣ��
	cout << "��� ������ �ʱ�ȭ �Ǿ����ϴ�" << endl;
}

Animal::Animal(int a, int b, int c)
{
	cout << "�ߺ������� �ϼ�";
}

Animal::~Animal()
{
	cout << endl << "��ü�� �Ҹ��߽��ϴ�";
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
	cout << "�� ������ �̸��� : " << m_name;
	cout << endl;
}

void AnimalAge(int m_age)
{
	cout << "�� ������ ���̴� : " << m_age;
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