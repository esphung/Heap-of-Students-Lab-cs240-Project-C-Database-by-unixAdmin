#ifndef STUDENT_EXISTS
#define STUDENT_EXISTS

#include "date.h"

#include <iostream>
#include <string>

using namespace std;

class Student{
private:
	string last_name;
	string first_name;
	string first_address;
	string second_address;
	string city;
	string state;
	string zipcode;
	string birthday_date;
	string completion_date;
	string gpa;
	string credit_hours;
public:

	Student();
	Student(std::string last_name, std::string first_name, std::string first_address, std::string second_address, std::string city, std::string state, std::string zipcode, std::string birthday_date, std::string completion_date, std::string gpa, std::string credit_hours);
	// date instantiation on stack for students
	Date birthdayObject;
	Date completionObject;

	~Student();// destructor


	void displayData();

};// end student class

#endif
