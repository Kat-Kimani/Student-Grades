// LogicalFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int score;
	cout << " Strathmore University Student Grading System. " << endl << " \n";

	string name;
	cout << " Your Grade Semester 1: DBIT 1102 Programming" << endl << "\n ";

	cout << "Enter Student Name : " << endl << "\n ";
	getline(cin, name);
	cout << "\n ";
	cout << "Enter Score mark : " << "\n";
	cout << "\n ";
	cin >> score;
	cout << "\n ";
	if (score >= 70) {
		cout << "Grade A. Well done!!";
		cout << endl << "\n ";
	}
	else if (score >= 60 && score <= 69) {
		cout << "Grade B. Good. ";
		cout << "\n ";
	}
	else if (score >= 50 && score <= 59) {
		cout << "Grade C. Average. ";
		cout << "\n ";
	}
	else if (score >= 40 && score <= 49) {
		cout << " Grade D. Retake Course.";
		cout << "\n ";

	}
	else if (score <= 40) {
		cout << " Grade F . Retake Course. ";
		cout << "\n ";
		cout << "\n ";
	}
	else
		cout << "Invalid Grade";

	return 0;
}