/*
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ BASSEY,ODUDU ESIT ]
 * Matric No:   [ PDS/2013/0154 ]
 * Department:  [ COMPUTER SCIENCE ]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include <math.h>           // uses C++ math class
#include <iomanip>          // used iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile( string firstName, string lastName, string gender, int month,
                             int day, int year, int weight, double height, int currentday,
                             int currentMonth, int thisYear)
{
    void setFirstName(string firstName);      // call set function to initialize firstName
    void setLastName(string lastName );        // call set function to initialize lastName
    void setGender(string gender );            // call set function to initialize gender
    void setday(int day );              // call set function to initialize day
    void setmonth(int month );                  // call set function to initialize month
    void setYear(int year );                // call set function to initialize year
    void setWeight(int weight );            // call set function to initialize weight
    void setHeight(double height );            // call set function to initialize height
    void setAge(int today, int thisMonth, int thisYear);  // call set function to calculate age
}

// funtion to print object information
void HealthProfile::getInformation()
{
    cout << "\n\nHEALTH PROFILE FOR - " << getfirstName() << " " << getlastName() << endl;
    cout << "First Name: " << setw(17) << getfirstName() << endl;
    cout << "Last Name: " << setw(19) << getlastName() << endl;
    cout << "Gender: " << setw(20) << getgender() << endl;
    cout << "Date of Birth: " << setw(10) << getcurrentday() << "/" << getmonth() << "/" << getyear() << endl;
    cout << "Weight (in kilograms): " << setw(3) << getweight() << endl;
    cout << "Height (in meters): " << setw(10) << getheight() << endl;
    cout << "Age: " << setw(21) << getAge() << " year(s)" << endl;
    cout << "Body Mass Index (BMI): " << setw(8) << getBMI() << endl;
    cout << "Maximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
    cout << "Target Heart Rate: " << setw(11) << getTargetHeartRate() << endl;
    cout << "\nBMI VALUES CHART" << endl;
    cout << "Underweight:   less than 18.5" << endl;
    cout << "Normal:        between 18.5 and 24.9" << endl;;
    cout << "Overweight:    between 25 and 29.9" << endl;
    cout << "Obesse:         30 or greater" << endl;
}

// implementaion details for functions in HealthProfileStub.h


void setfirstName(string firstName)
{
	HealthProfile::firstName=firstName;
}
void setlastName(string lastName)
{
	HealthProfile::lastName;
}
void setgender(string gender)
{
	HealthProfile::gender=gender;
}
void setday(int day)
{
	HealthProfile::day=day;
}
void setmonth(int month)
{
	HealthProfile::month=month;
}
void setyear(int year)
{
	HealthProfile::year=year;
}
void setweight(int weight)
{
	HealthProfile::weight=weight
}
void setheight(double height)
{
	HealthProfile::height=height
}

void setAge(int today, int thisMonth, int thisYear)
{
	Age = thisYear - year;
}

string getfirstName()
{
	return firstName;
}

string getlastName()
{
	return lastName;
}

string getgender()
{
	return gender;
}

int getday()
{
	return day;
}

int getmonth()
{
	return month;
}

int getyear()
{
	return year;
}

int getweight()
{
	return weight;
}

double getheight()
{
	return height;
}

int getAge()
{
	return Age;
}

double getBMI()
{
	return weight/(height*height);
}

int getMaximumHeartRate()
{
	return 220 - Age;
}

double getTargetHeartRate()
{
	return MaximumHeartRate*50/100;
}










// Implementation for the constructor and getInformation function has already been provided

