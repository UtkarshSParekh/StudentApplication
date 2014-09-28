#include "Students.h"
class UnderGraduateStudents : public Students
{
private:
	double studentGpa;
public:
	courses cs;
	personDetails pd;
	Students st;
	UnderGraduateStudents();
	double computeGpa(double *testScoreOne, double *testScoreTwo);
	void print();
};