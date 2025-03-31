#pragma once
#include "student.h"

	
//Below here are constructors

	Student::Student(int studentId, std::string lastName, std::string emailAddress, int age, int daysToCompleteCourse[3], std::string degreeProgram) {
		this->studentId = studentId;
		this->lastName = lastName;
		this->emailAddress = emailAddress;
		this->age = age;
		this->degreeProgram = degreeProgram;
		for (int i = 0; i < 3; i++) {
			this->daysToCompleteCourse[3] = daysToCompleteCourse[i];
		}

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
	int* Student::getDaysToCompleteCourse() {
		return daysToCompleteCourse;
	}
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
	void Student::setDaysToCompleteCourse(const int newValues[3]) {
		for (int i = 0; i < 3; ++i) {
			this->daysToCompleteCourse[i] = newValues[i];
		}
	}


	void Student::printFunction() {
		
		std::cout << "Student ID | First Name | Last Name | Email | Age | Days in Course | Degree Program";
	
	
	}

	void Student::printFunctions() {
		std::cout << this->getStudentId() << '\t';
		std::cout << this->getFirstName() << '\t';
		std::cout << this->getEmailAddress() << '\t';
		std::cout << this->getAge() << '\t';
		std::cout << this->getDaysToCompleteCourse() << '\t';
		std::cout << this->getDegreeProgram() << '\t';
	}





