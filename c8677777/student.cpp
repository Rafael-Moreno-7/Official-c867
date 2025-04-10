#include <iostream>
#include "student.h"
#include <vector>

//Constructor below
Student::Student(int studentId, std::string firstName, std::string lastName, std::string emailAddress,int age, std::vector<int> daysToCompleteCourse, std::string degreeProgram) {
	this->studentId = studentId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->daysToCompleteCourse = daysToCompleteCourse;
	this->degreeProgram = degreeProgram; 

}

//Getter functions

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
std::vector<int> Student::getDaysToCompleteCourse() {
	return daysToCompleteCourse;
}
std::string Student::getDegreeProgram() {
	return degreeProgram;
}

//setter functions below 
void Student::setStudentID(int studentId) {
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
void Student::setDaysToCompleteCourse(std::vector<int> daysToCompleteCourse) {
	this->daysToCompleteCourse = daysToCompleteCourse;
}
void Student::setDegreeProgram(std::string degreeProgram) {
	this->degreeProgram = degreeProgram;
}

//Print functions

void Student::printFunctions() {
	std::cout << "Student Id: " << getStudentId() << '\t';
	std::cout << "First Name: " << getFirstName() << '\t';
	std::cout << "Last Name: " << getLastName() << '\t' << '\t';
	std::cout << "Email Address: " << getEmailAddress() << '\t';
	std::cout << "Age: " << getAge() << '\t' << '\t';
	std::cout << "Days To Complete Course: "  ;
	for (auto i: getDaysToCompleteCourse()) {
		std::cout << i << ",";
	}
	
	std::cout << '\t' << "Degree Program: " << getDegreeProgram() << '\n';


}