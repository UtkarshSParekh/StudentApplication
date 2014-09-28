#include "Students.h"

Students::Students()
{
	studentId = 0;
	studentGpa = 0.00;

	courses* cs = new courses(); 
}

void Students::setStudent(int id, double gpa)
{
	studentId = id;
	studentGpa = gpa;
}

int Students::getId()
{
	return studentId;
}

void Students::print()
{
	cout << endl;
	cout << "Student Information::" << endl;
	cout << "===================================" << endl;
	cout << "Student Id::" << studentId << endl;
	cout << endl;
}

void Students::print(string firstName, string lastName, string gender)
{
	cout << endl;
	cout << "Personal Information::" << endl;
	cout << "======================" << endl;
	cout << "Person Name:" << firstName + " " + lastName << endl;
	cout << "Person Gender:" << gender << endl;
	cout << endl;
}