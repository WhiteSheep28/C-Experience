#include <iostream>

#include "Character.h"

using namespace std;

void main()
{
	const int nInputNum = 15252; //객체 배열 들어갈 숫자
	char cInputArrChar[100]; //처음 입력받을 배열
	int nCount = 0;

	cout << "입력하실 이름을 적어 주세요" << endl;
	cout << "입력 : ";
	cin >> cInputArrChar;

	Character Hero(cInputArrChar, 100);
	Character CopyHero[nInputNum];

	while (nCount != nInputNum - 1)
	{
		CopyHero[nCount].CopyObject(Hero);
		nCount++;
	}
}