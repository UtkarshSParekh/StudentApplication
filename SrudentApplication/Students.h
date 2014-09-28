#include <iostream>
using namespace std;
#include "personDetails.h"
#include "courses.h"

class Students : public personDetails
{
private:
	int studentId;
	double studentGpa;
	courses* cs;
public:
	Students();
	Students(int id, double gpa);
	void setStudent(int id, double gpa);
	int getId();
	void print();
	void print(string firstname, string lastname, string gender);

	courses* getCourses(){return cs;}
};