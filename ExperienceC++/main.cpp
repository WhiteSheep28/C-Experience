#include <iostream>
#include "variable.h"
using namespace std;

//���� ��� ���� �ʱ�ȭ
int Animal::m_AllAnimal = 0;

int main(void)
{
	int nDogAge = 0;
	int nInputTest = 0;

	//�ߺ� ������ Ȯ�ο� ����
	int a = 0, b = 0, c = 0;

	//��ü (2�� ����)
	Animal Dog, Tiger, Test;
	cout << endl;

	//�ߺ���ü ����
	Animal::Animal(a, b, c);
	cout << endl;

	//��� �Լ� ����
	Dog.SetAnimal();
	Animal::AnimalPlus(1);
	Dog.AnimalName("�ƶ�");
	Dog.AnimalAge(5);
	Dog.bark();

	Tiger.SetAnimal();
	Animal::AnimalPlus(1);
	Tiger.AnimalName("����");
	Tiger.AnimalAge(10);
	Tiger.bark();

	cout << "�� ������ �� : " << Animal::AnimalReturn();
	cout << endl;

	cout << "�ƹ� ���ڳ� �Է��� �ּ���" << endl;
	cin >> nInputTest;
	Test.SetTest(nInputTest);
	cout << Test.GetTest();
}