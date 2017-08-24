#include "student.h"
#include <iostream>

using namespace std;

void printInfo(students info)
{
	cout << "Student Info. " << endl;
	cout << "Student ID. " << info.studentId << endl;
	cout << " Student Course. " << info.studentCourse << endl;
	cout << "Last Exam Score. " << info.lastExam << endl;
}