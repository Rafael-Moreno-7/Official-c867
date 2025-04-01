#include <iostream>
#include "degree.h"
#include "roster.h"
#include "roster.cpp"
#include "student.h"
#include "student.cpp"







int main() {

    
   
    // Define an array for daysToCompleteCourse
    int daysToComplete[] = { 34, 35, 56 };

    Student student1(64, "Rafael", "Moreno", "rafaelcloud@gmail.com", 22, daysToComplete, "Programming");


        // Call the print function to display student details
        student1.printFunctions();

        return 0;
}