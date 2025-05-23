#include <iostream>
using namespace std;

//Class
class Animal
{
//���� ��� ���� 
private:
	string m_name;
	int m_age;
	int m_strong;
	
	//���� ��� ����
	static int m_AllAnimal;
public:
	//��� �Լ�
	void bark()
	{
		cout << "Bark!" << endl;
	}

	void AnimalName(string m_name)
	{
		cout << "�� ������ �̸��� : " << m_name;
	}

	void AnimalAge(int m_age)
	{
		cout << "�� ������ ���̴� : " << m_age;
	}

	static void AnimalPlus(int a)
	{
		m_AllAnimal = m_AllAnimal + a;
	}

	static int AnimalReturn()
	{
		return m_AllAnimal;
	}

	//������
	Animal()
	{
		cout << "��ü�� �����Ǿ����ϴ�" << endl;
		//��� ���� ȣ��
		m_name = "\0";
		m_age = 0;
		cout << "��� ������ �ʱ�ȭ �Ǿ����ϴ�" << endl;
	}

	//�Ҹ���
	~Animal()
	{
		cout << endl << "��ü�� �Ҹ��߽��ϴ�";
	} 
};

//���� ��� ���� �ʱ�ȭ
int Animal::m_AllAnimal = 0;

void main()
{
	int nDogAge = 0;
	//��ü (2�� ����)
	Animal Dog, Tiger;

	//��� �Լ� ����
	Animal::AnimalPlus(1);
	cout << endl;
	Dog.AnimalName("�ƶ�");
	cout << endl;
	Dog.AnimalAge(5);
	cout << endl;
	Dog.bark();
	cout << endl;

	Animal::AnimalPlus(1);
	cout << endl;
	Tiger.AnimalName("����");
	cout << endl;
	Tiger.AnimalAge(10);
	cout << endl;
	Tiger.bark();
	cout << endl;

	cout << "�� ������ �� : " << Animal::AnimalReturn();
	cout << endl;
}