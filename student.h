#pragma once
#include <iostream>
#include <iomanip>
#include "degree.h"
using std::string;
using std::cout;

class Student
{
public:
	const static int daysInCourseArraySize = 3;
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	double daysInCourse[daysInCourseArraySize];
	DegreeProgram degreeProgram;
public:
	Student(); /*Parameterless Constructor. Sets to default values.*/
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, double daysInCourse[], DegreeProgram degreeProgram); /*Full Constructor*/
	~Student(); /*Destructor*/

	/*Accessors*/
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	double* getDaysInCourse();
	DegreeProgram getDegreeProgram();

	/*Mutators*/
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysInCourse(double daysInCourse[]);
	void setDegreeProgram(DegreeProgram degreeProgram);

	static void printHeader(); /*Displays a header for the data.*/

	void print(); /*Displays specific student's data.*/
};