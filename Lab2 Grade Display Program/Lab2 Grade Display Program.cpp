// Feature by Colby: Pass/Fail Check
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string student_name;
	int grade;

	cout << "Enter student name: ";
	getline(cin, student_name);

	cout << "Enter student grade: ";
	cin >> grade;

	if(grade >= 60)
	{
		cout << student_name << " has passed with a grade of " << grade << "." << endl;
	}
	else
	{
		cout << student_name << " has failed with a grade of " << grade << "." << endl;
	}
}