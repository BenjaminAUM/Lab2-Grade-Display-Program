// Feature by Colby: Pass/Fail Check
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string student_name;
	double grade1, grade2, grade3, average;

	cout << "Enter Student Name: ";
	getline(cin, student_name);

	cout << "Enter Grade 1: ";
	cin >> grade1;

	cout << "Enter Grade 2: ";
	cin >> grade2;

	cout << "Enter Grade 3: ";
	cin >> grade3;

	average = (grade1 + grade2 + grade3) / 3;

	cout << "Student Name: " << student_name << endl;
	cout << "Grade 1: " << grade1 << endl;
	cout << "Grade 2: " << grade2 << endl;
	cout << "Grade 3: " << grade3 << endl;
	cout << "Average Grade: " << average << endl;

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