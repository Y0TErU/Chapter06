#include<iostream>
using namespace std;

const int MAX_NAME = 16;

class Student
{
public:
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;

	void Show();

};

void Student::Show()
{
	cout << "–¼‘O : " << name << endl
		<< "‘Œê : " << scoreJapanese << endl
		<< "”Šw : " << scoreMath << endl
		<< "‰pŒê : " << scoreEnglish << endl;
}

int main()
{
	Student student[] =
	{
		{"Ôˆä–]", 73,98,86,},
		{"Š}ˆä‘å•ã",64,45,40,},
		{"‹g“c•c",76,78,69,},
	};
	int size = sizeof student / sizeof * student;

	for (int i = 0; i < size; i++)
	{
		student[i].Show();
	}
}
