#include <iostream>

#include "student.cpp"

class Student {

private:
	int studentId;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	int daysToCompleteCourse[3];
	std::string degreeProgram;

public: 

//Below here -> Constructors

	Student(int studentId, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysToCompleteCourse[3], std::string degreeProgram);

//Below here -> Getters

	int getStudentId();
	std::string getFirstName();
	std::string getLastName();
	std::string getEmailAddress();
	int getAge();
	int* getDaysToCompleteCourse();
	std::string getDegreeProgram();

//Below here-> Setters

	void setStudentId(int studentId);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setEmailAddress(std::string emailAddress);
	void setAge(int age);
	void setDaysToCompleteCourse(const int newValues[3]);
	void setDegreeProgram(std::string degreeProgram);

//Print Functions

	
	void printFunctions();


};


