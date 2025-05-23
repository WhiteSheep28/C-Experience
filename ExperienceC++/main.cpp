#include <iostream>
using namespace std;

//Class
class Animal
{
//공용 멤버 변수 
private:
	string m_name;
	int m_age;
	int m_strong;
	
	//정적 멤버 변수
	static int m_AllAnimal;
public:
	//멤버 함수
	void bark()
	{
		cout << "Bark!" << endl;
	}

	void AnimalName(string m_name)
	{
		cout << "이 동물의 이름은 : " << m_name;
	}

	void AnimalAge(int m_age)
	{
		cout << "이 동물의 나이는 : " << m_age;
	}

	static void AnimalPlus(int a)
	{
		m_AllAnimal = m_AllAnimal + a;
	}

	static int AnimalReturn()
	{
		return m_AllAnimal;
	}

	//생성자
	Animal()
	{
		cout << "객체가 생성되었습니다" << endl;
		//멤버 변수 호출
		m_name = "\0";
		m_age = 0;
		cout << "멤버 변수가 초기화 되었습니다" << endl;
	}

	//소멸자
	~Animal()
	{
		cout << endl << "객체가 소멸했습니다";
	} 
};

//정적 멤버 변수 초기화
int Animal::m_AllAnimal = 0;

void main()
{
	int nDogAge = 0;
	//객체 (2개 생성)
	Animal Dog, Tiger;

	//멤버 함수 접근
	Animal::AnimalPlus(1);
	cout << endl;
	Dog.AnimalName("아랑");
	cout << endl;
	Dog.AnimalAge(5);
	cout << endl;
	Dog.bark();
	cout << endl;

	Animal::AnimalPlus(1);
	cout << endl;
	Tiger.AnimalName("어흥");
	cout << endl;
	Tiger.AnimalAge(10);
	cout << endl;
	Tiger.bark();
	cout << endl;

	cout << "총 동물의 수 : " << Animal::AnimalReturn();
	cout << endl;
}