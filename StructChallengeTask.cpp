 //
 // main.cpp
 // LearningC++
 //
 // Created by Ezaiah Akyeem/Eazythedev
 // September 13, 2025
 // W3 Schools Structures (struct): Challenge Task
 #include <iostream>
 #include <string>
 #include <cmath>
 using namespace std;
 
 struct student {
     string studentName;
     int studentAge;
     char studentGrade;
 };

 int main() {
 student student1;
 student1.studentName = "Denzel";
 student1.studentAge = 32;
 student1.studentGrade = 'B';
 
 cout << "Student Name: " << student1.studentName << "\n" << "Student Age: " << student1.studentAge << "\n" << "Student Grade: " << student1.studentGrade << "\n" ;
