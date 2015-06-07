/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ BASSEY,ODUDU ESIT ]
 * Matric No:   [ PDS/2013/0154]
 * Department:  [ COMPUTER SCIENCE ]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main()
{
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int day;
    int month;
    int year;
    double height;
    int weight;
    int currentday;
    int currentMonth;
    int currentYear;
    
    // Prompt for patient information
    cout << "Welcome to our program to computerize healthcare records\n";
    cout << "please fill-in your information as requested. Thank you\n";
    cout << "\nKindly enter todays day, month and year using numeric representations only\n";
    cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break\n";
    
    // TODO: Put your code to receve input from user here
    cout << " enter the first name of patient\n ";
    cin >> firstName;
    
    cout <<" enter the last name of patient\n";
    cin >> lastName;
    
    cout << "Enter gender of patient (male or female)\n";
    cin >> gender;
    
    cout<< "Enter the day of birth ()\n";
    cin >> month;
    
    cout << "Enter the month of birth ()\n";
    cin >> day;
    
    cout << "Enter the year of birth ()\n";
    cin >> year;
    
    cout << "Enter the height of patient in inches\n";
    cin >> height;
    
    cout << "Enter the weight of patient in pounds\n";
    cin >> weight;
    
    cout << "Enter current day\n";
    cin >> currentday;
    
    cout << "Enter current month\n";
    cin >> currentMonth;
    
    cout << "Enter current year\n";
    cin >> currentYear;
    
    // Instantiate an object of class HealthProfile - passing relevant values to the constructor
    
    HealthProfile Patient (firstName, lastName, gender, month, day, year, height, weight, currentday, currentMonth, currentYear ); 
    
	// Print information from the object - by calling getInformation() function
    
    cout << "Patient.getInformation ()";
    
    
    int Age; 
    
    double TargetHeartRate;
	 
    double BMI;
    
    int MaximumHeartRate;
    
    Age= currentYear - year;
    
    TargetHeartRate = MaximumHeartRate*50/100;
    
    BMI = BMI;
    
    MaximumHeartRate = 220 - Age;
    
    return 0;
    
    
    

    
}
