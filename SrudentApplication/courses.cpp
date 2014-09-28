#include "courses.h"

courses::courses()
{
	courseId = new int[];
	courseName = new string[];
	testScoreOne = new double[];
	testScoreSecond = new double[];
}

void courses::addCourses()
{
	int noOfCourse;
	cout << "Please add the no. of courses: ";
	cin >> noOfCourse;
	noOfCourses = noOfCourse;

	courseId = new int[noOfCourse];
	courseName = new string[noOfCourse];
	testScoreOne = new double[noOfCourse];
	testScoreOne = new double[noOfCourse];

	cout << "Enter the course(s) details here: ";
	for (int i = 0; i < noOfCourse; i++)
	{
		cout << endl;

		cout << "Please Enter Course Number:: ";
		cin >> courseId[i];
		cin.ignore(1, '\n');

		cout << "Please Enter Course Name:: ";
		getline(cin, courseName[i]);

		cout << "Please Enter Course test-1 score:: ";
		cin >> testScoreOne[i];

		cout << "Please Enter Course test-2 score:: ";
		cin >> testScoreSecond[i];

		cout << endl;
	}

}

int *courses::getCourseId()
{
	
	for (int i = 0; i < noOfCourses; i++)
	{
		cout << "Course Id::" << courseId[i] << endl;
	}
	
	return courseId;
}

string *courses::getCourseName()
{
	for (int i = 0; i < noOfCourses; i++)
	{
		cout << "Course Name::" << courseName[i] << endl;
	}
	return courseName;
}

double *courses::getTestScoreOne()
{
	for (int i = 0; i < noOfCourses; i++)
	{
		cout << "First Test Score::" << testScoreOne[i] << endl;
	}
	return testScoreOne;
}

double *courses::getTestScoreSecond()
{
	for (int i = 0; i < noOfCourses; i++)
	{
		cout << "Second Test Score::" << testScoreSecond[i] << endl;
	}
	return testScoreSecond;
}

void courses::print()
{
	cout << "Courses Details::" << endl;
	cout << "============================" << endl;
	int count = 1;
	for (int i = 0; i < noOfCourses; i++)
	{
		cout << endl;
			cout << "Course - " << count << "'s Details::" << endl;
			cout << "=========================================" << endl;
			cout << "Course Id:: " << courseId[i] << endl;
			cout << "Course Name:: " << courseName[i] << endl;
			cout << "First Test Score:: " << testScoreOne[i] << endl;
			cout << "Second Test Score:: " << testScoreSecond[i] << endl;
			cout << endl;
		count++;
	}
}