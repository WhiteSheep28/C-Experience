#pragma warning (disable:4996)

#include <iostream>
#include <string.h>

#include "Character.h"

using namespace std;

int Character::m_nNum = 0;
int Character::nCount = 0;

Character::Character()
{
}

Character::Character(const char* pName, const int nLife)
{
	m_nLenth = strlen(pName);

	ChangeNumber();

	while (m_nLenth != 0)
	{
		m_nLenth--;
		m_pName[m_nLenth] = pName[m_nLenth];
	}

	m_nLife = nLife;
	
	Character::Print();
}

Character::~Character()
{
	m_pName = nullptr;
	delete[] m_pName;

	cout << "소멸" << nCount << endl;
	nCount++;
}
void Character::CopyObject(const Character& obj)
{
	m_nLenth = strlen(obj.m_pName) - 1;

	ChangeNumber();

	while (m_nLenth != 0)
	{
		m_nLenth--;
		m_pName[m_nLenth] = obj.m_pName[m_nLenth];
	}

	m_nLife = obj.m_nLife;

	Character::Print();
}

void Character::Print()
{
	cout << "이름 : " << m_pName << " 생명력 : " << m_nLife << endl;

}

void Character::ChangeNumber()
{
	m_nNumCount = 0;
	m_nNum++;
	int nNum = m_nNum;
	int nSecondNum = m_nNum;
	int nResultNum = m_nNum;

	while (nNum != 0)
	{
		nNum /= 10;
		m_nNumCount++;
	}

	Alloc();

	m_pName[m_nLenth] = '\0';

	while (m_nNumCount != 0)
	{
		m_nNumCount--;
		m_nLenth--;
		nSecondNum %= 10;
		m_pName[m_nLenth] = nSecondNum + '0'; 
		nResultNum = nResultNum / 10;
		nSecondNum = nResultNum;
	}
}

void Character::Alloc()
{
	m_nLenth += m_nNumCount;
	m_pName = new char(m_nLenth);
}

/*
원래 값 하나 
원래 값 하나를 10으로 나눔 
나머지 값 하나 
*/