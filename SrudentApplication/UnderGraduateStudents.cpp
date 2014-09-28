#include "UnderGraduateStudents.h"


UnderGraduateStudents::UnderGraduateStudents()
{
	studentGpa = 0.00;
}

double UnderGraduateStudents::computeGpa(double *testScoreOne, double *testScoreTwo)
{
	double *TestScoreOneArray = testScoreOne;
	double *TestScoreSecondArray = testScoreTwo;

	for (int i = 0; i < cs.noOfCourses; i++)
	{
		studentGpa += TestScoreOneArray[i] * 0.5 + TestScoreSecondArray[i] * 0.5;
	}
	return studentGpa;
}

void UnderGraduateStudents::print()
{

	string *getCourseNameArray = cs.getCourseName();
	double *TestScoreOneArray = cs.getTestScoreOne();
	double *TestScoreSecondArray = cs.getTestScoreSecond();

	cout << "UnderGraduateStudents Details::" << endl;
	cout << "========================================" << endl;
	cout << "Student Name::" << personDetails::getName() << endl;
	cout << "Student Id::" << Students::getId() << endl;
	cout << "noOfCourses::" << cs.noOfCourses << endl;

	for (int i = 0; i < cs.noOfCourses; i++)
	{
		cout << "Course Name::" << getCourseNameArray[i] << endl;
		cout << "First Test Score::" << TestScoreOneArray[i] << endl;
		cout << "Second Test Score::" << TestScoreSecondArray[i] << endl;
	}

	cout << "Student GPA::" << studentGpa << endl;
}