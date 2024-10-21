#include<iostream>
#include<cstdlib>
using namespace std;

const int INT_ARRAY_SIZE = 100;

class IntArray
{
public:
	IntArray();						//コンストラクタ

public:
	int Get(int i);					//メンバへのアクセス関数(取得)
	void Set(int i, int value);		//メンバへのアクセス関数(変更)
private:
	void CheckIndex(int i);			//インデックスのチェック
private:
	int m_array[INT_ARRAY_SIZE];	//メンバ変数は基本的にprivateにする
};

//メンバへのアクセス関数
int IntArray::Get(int i)
{
	CheckIndex(i);
	return m_array[i];
}

void IntArray::Set(int i, int value)
{
	CheckIndex(i);
	m_array[i] = value;
}

//インデックスのチェック
void IntArray::CheckIndex(int i)
{
	if (0 <= i && i < INT_ARRAY_SIZE)
	{
		//インデックスは正常です
	}
	else
	{
		cout << "インデックスが不正です！" << endl
			<< "値 : " << i << endl;
		exit(EXIT_FAILURE);
	}
}