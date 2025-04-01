#pragma once
#include "student.h"
#include <string>

	
//Below here are constructors    

	Student::Student(int studentId, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysToCompleteCourse[3], std::string degreeProgram) {
		this->studentId = studentId;
		this->firstName = firstName;
		this->lastName = lastName;
		this->emailAddress = emailAddress;
		this->age = age;

		//create 


		this->degreeProgram = degreeProgram;
		

	}


//Below here -> Getters

	int Student::getStudentId() {
		return studentId;
	}
	std::string Student::getFirstName() {
		return firstName;
	}
	std::string Student::getLastName() {
		return lastName;
	}
	std::string Student::getEmailAddress() {
		return emailAddress;
	}
	int Student::getAge() {
		return age;
	}
	
	//create getter function for getDaysOfCourse



	std::string Student::getDegreeProgram() {
		return degreeProgram;
	}


//Below here - > Setters : 

	void Student::setStudentId(int studentId) {
		this->studentId = studentId;
	}
	void Student::setFirstName(std::string firstName) {
		this->firstName = firstName;
	}
	void Student::setLastName(std::string lastName) {
		this->lastName = lastName;
	}
	void Student::setEmailAddress(std::string emailAddress) {
		this->emailAddress = emailAddress;
	}
	void Student::setAge(int age) {
		this->age = age;
	}
	

	//create setter function of days of course 




	void Student::setDegreeProgram(std::string degreeProgram) {
		this->degreeProgram = degreeProgram; 
	}






	//below are print 



	void Student::printFunctions() {
		std::cout << "Student ID: " << this->getStudentId() << '\t';
		std::cout << "First Name: " << this->getFirstName() << '\t';
		std::cout << "Last Name: " << this->getLastName() << '\t';
		std::cout <<  "Email Address: " << this->getEmailAddress() << '\t';
		std::cout << "Age: " << this->getAge() << '\t';
		
		//create print line for days of course



		std::cout << "Degree Program: " << this->getDegreeProgram() << '\t';
	}





