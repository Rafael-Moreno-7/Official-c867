#pragma once
#include <iostream>
#include <vector>

class Student {

private:

	int studentId;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	std::vector<int> daysToCompleteCourse{0, 1, 2};
	std::string degreeProgram;

public:

	//Constructor below 
	Student(int studentId, std::string firstName, std::string lastName, std::string emailAddress, int age, std::vector<int> daysToCompleteCourse, std::string degreeProgram);
	

	//Getters functions

	int getStudentId();
	std::string getFirstName();
	std::string getLastName();
	std::string getEmailAddress();
	int getAge();
	std::vector<int> getDaysToCompleteCourse();
	std::string getDegreeProgram();

	//Setter functions below
	
	void setStudentID(int studentId);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setEmailAddress(std::string emailAddress);
	void setAge(int age);
	void setDaysToCompleteCourse(std::vector<int> daysToCompleteCourse);
	void setDegreeProgram(std::string degreeProgram);
	
	//print functions

	void printFunctions();





};