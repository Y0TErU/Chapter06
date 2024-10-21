#include<iostream>
#include<cstdlib>
using namespace std;

const int INT_ARRAY_SIZE = 100;

class IntArray
{
public:
	IntArray();						//�R���X�g���N�^

public:
	int Get(int i);					//�����o�ւ̃A�N�Z�X�֐�(�擾)
	void Set(int i, int value);		//�����o�ւ̃A�N�Z�X�֐�(�ύX)
private:
	void CheckIndex(int i);			//�C���f�b�N�X�̃`�F�b�N
private:
	int m_array[INT_ARRAY_SIZE];	//�����o�ϐ��͊�{�I��private�ɂ���
};

//�����o�ւ̃A�N�Z�X�֐�
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

//�C���f�b�N�X�̃`�F�b�N
void IntArray::CheckIndex(int i)
{
	if (0 <= i && i < INT_ARRAY_SIZE)
	{
		//�C���f�b�N�X�͐���ł�
	}
	else
	{
		cout << "�C���f�b�N�X���s���ł��I" << endl
			<< "�l : " << i << endl;
		exit(EXIT_FAILURE);
	}
}