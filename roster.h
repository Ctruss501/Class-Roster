#pragma once
#include "student.h"
class Roster
{
public:
	int lastIndex = -1;
	const static int numStudents = 5;
	Student* classRosterArray[numStudents]; /*Not declared dynamically.*/
public:
	void parse(string row);

	void add(string studentID, string firstName, string lastName, string emailAddress, int age, double daysInCourse1, double daysInCourse2,
		double daysInCourse3, DegreeProgram degreeProgram); /*Will update the roster.*/
	void remove(string studentID); /*Remove student from roster by studentID.*/
	void printAll(); /*Prints complete tab-seperated list of student data.*/
	void printAverageDaysInCourse(string studentID); /*Prints a student's average days in their 3 courses.*/
	void printInvalidEmails(); /*Displays invalid student emails. Email should have at sign ('@') and a period ('.') and not include any spaces.*/
	void printByDegreeProgram(DegreeProgram degreeProgram); /*Prints student info for a specfic degree program.*/
	~Roster();
};