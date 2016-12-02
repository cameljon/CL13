#include <iostream>
#include <string>

using namespace std;

struct College
{
	string name;
	string state;
};

struct Student
{
	string name;
	College* ptrCollege;
};

int main()
{
	College college[3];
	college[0].name = "JCCC";
	college[0].state = "KD";
	college[1].name = "MCCDC";
	college[1].state = "MO";
	college[2].name = "KCKCC";
	college[2].state = "KS";

	Student students[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter student #";
		cin >> students[i].name;
		cout << "What college?" << endl;
		for (int k = 0; k < 3; k++)
		{
			cout << k << ": " << college[k].name << " in " << college[k].state << endl;
		}
		int choice;
		cout << "#";
		cin >> choice;
		students[i].ptrCollege = &college[choice];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "Student: " << students[i].name << " ID#" << i << " College: " << students[i].ptrCollege->name << " State:" << students[i].ptrCollege->state << endl;
	}

	return 0;
}