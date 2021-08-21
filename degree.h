#pragma once
#include <string>
enum DegreeProgram { SECURITY, NETWORK, SOFTWARE };

/*Parallel array gives a string for each degree. Using DegreeProgram as an index.*/
static const std::string degreeProgramStrings[] = { "SECURITY" , "NETWORK" , "SOFTWARE" };