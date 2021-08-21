#include "roster.h"

int main()
{
	cout << "(C867) Scripting and Programming - Applications, C++" << std::endl;
	cout << std::endl;

	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,20,25,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Corey,Trussell,ctrus10@wgu.edu,28,25,32,27,SOFTWARE"
	};
	const int numStudents = 5;
	Roster classRoster;

	for (int i = 0; i < numStudents; i++) classRoster.parse(studentData[i]);
	cout << "Displaying all student information: " << std::endl;
	classRoster.printAll();
	cout << std::endl;

	cout << "Displaying students with invalid emails: " << std::endl;
	classRoster.printInvalidEmails();
	cout << std::endl;

	cout << "Displaying average days in courses: " << std::endl;
	for (int i = 0; i < numStudents; i++)
	{
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
	}
	cout << std::endl;

	cout << "Displaying by Degree Program SOFTWARE: " << degreeProgramStrings[2] << std::endl;
	classRoster.printByDegreeProgram(SOFTWARE);

	/*cout << "Displaying by Degree Program NETWORK: " << degreeProgramStrings[1] << std::endl;
	classRoster.printByDegreeProgram(NETWORK); IF I WANTED TO DISPLAY BY NETWORK

	cout << "Displaying by Degree Program SECURITY: " << degreeProgramStrings[0] << std::endl;
	classRoster.printByDegreeProgram(SECURITY) IF I WANTED TO DISPLAY BY SECURITY */

	cout << "Removing student A3: " << std::endl;
	classRoster.remove("A3");
	cout << std::endl;

	cout << "Removing student A3: " << std::endl;
	classRoster.remove("A3");
	cout << std::endl;

	system("pause");
	return 0;
}