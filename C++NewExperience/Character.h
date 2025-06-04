class Character
{
public:
	Character();
	Character(const char* pName,const int nLife); 
	~Character();

	void ChangeNumber();
	void Print();
	void CopyObject(const Character& obj);
	void Alloc();

private:
	char* m_pName;
	int m_nLife;
	int m_nLenth;
	
	static int m_nNum;
	int m_nNumCount;

	static int nCount;
};


