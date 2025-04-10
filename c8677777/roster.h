#pragma once
#include <vector>
#include "student.h"


class Roster {
private:

	std::vector <Student> classRosterArray{
												
	
	};



	class Student1: public Student{
	
		



	};
	class Student2: public Student{
		int studentId = 34;
		std::string firstName = "Albertano";
		std::string lastName = "Marroquin";
		std::string emailAddress = "albertanomarroquin333@gmail.com";
		int age = 43;
		std::vector<int> daysToCompleteCourse{ 34,25,45 };
		std::string degreeProgram = "Security";


	};
	class Student3: public Student{
		int studentId = 23;
		std::string firstName = "Albertano";
		std::string lastName = "Marroquin";
		std::string emailAddress = "albertanomarroquin333@gmail.com";
		int age = 43;
		std::vector<int> daysToCompleteCourse{ 34,25,45 };
		std::string degreeProgram = "Security";


	};
	class Student4: public Student {
		int studentId = 23;
		std::string firstName = "Albertano";
		std::string lastName = "Marroquin";
		std::string emailAddress = "albertanomarroquin333@gmail.com";
		int age = 43;
		std::vector<int> daysToCompleteCourse{ 34,25,45 };
		std::string degreeProgram = "Security";


	};
	class Student5: public Student {
		int studentId = 23;
		std::string firstName = "Albertano";
		std::string lastName = "Marroquin";
		std::string emailAddress = "albertanomarroquin333@gmail.com";
		int age = 43;
		std::vector<int> daysToCompleteCourse{ 34,25,45 };
		std::string degreeProgram = "Security";


	};


public:


	

};


/*
"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Rafael,Moreno,rafaelmoreno489@icloud.com,22,23,26,24,SOFTWARE"*/
