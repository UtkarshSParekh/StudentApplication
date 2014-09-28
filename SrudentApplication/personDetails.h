#include <iostream>
#include <string>
//#include <ctime>
using namespace std;

class personDetails
{
private:
	string firstName; string lastName; string fullStudentName; string gender;
	//int bDate; int bMonth; int bYear;

public:
	personDetails();
	void addPersonDetails();
	void setPersonDetails(string firstName, string lastName, string gender);
	string getFirstName();
	string getLastName();
	string getName();
	string getGender();
};