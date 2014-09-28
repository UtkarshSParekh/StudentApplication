#include <iostream>
using namespace std;
#include <string>

class courses
{
private:
	int *courseId;
	string *courseName;
	double *testScoreOne;
	double *testScoreSecond;
public:
	int noOfCourses;
	courses();
	//courses(int courseId, string courseName, double testScoreOne, double testScoreSecond);
	void addCourses();
	int *getCourseId();
	string *getCourseName();
	double *getTestScoreOne();
	double *getTestScoreSecond();
	void print();
};
