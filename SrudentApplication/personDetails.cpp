#include "personDetails.h"

personDetails::personDetails()
{
	firstName = "Not available";
	lastName = "";
	fullStudentName = "Not available";
	gender = "Not available";
}

void personDetails::addPersonDetails()
{
	cout << endl;
	cout << "Please Enter Your First Name::";
	cin >> firstName;

	cout << "Please Enter Your Last Name::";
	cin >> lastName;

	cout << "Please Enter Your Gender::";
	cin >> gender;
	cout << endl;
}

void personDetails::setPersonDetails(string firstNamePara, string lastNamePara, string genderPara)
{
	firstName = firstNamePara;
	lastName = lastNamePara;
	gender = genderPara;
}

string personDetails::getFirstName()
{
	return firstName;
}

string personDetails::getLastName()
{
	return lastName;
}

string personDetails::getName()
{
	fullStudentName = firstName + " " + lastName;
	return fullStudentName;
}

string personDetails::getGender()
{
	return gender;
}