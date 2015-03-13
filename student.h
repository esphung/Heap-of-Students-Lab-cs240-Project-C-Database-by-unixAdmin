/* student.h
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/
#ifndef STUDENT_EXISTS
#define STUDENT_EXISTS
#include "date.h"
#include "address.h"
//#include "database.h"
#include <iostream>
#include <vector>
class Student{
private:

	std::string first_name;
	std::string first_address;
	std::string second_address;
	std::string city;
	std::string state;
	std::string zipcode;
	std::string birthday_date;
	std::string completion_date;
	std::string gpa;
	std::string credit_hours;

std::vector<std::string> myDate;
	std::string rawInfo;

	std::string name;
	std::string dob;
	std::string comp;
	std::string address;


	Date birthdayObject;
	Date completionObject;
	Address addressObject;

public:
	std::string last_name;
	Student();
	Student(std::vector<std::string> rawInfo);
	~Student();// destructor

	// method decs
	std::string getDate();
	void displayNames();// public method declaration
	void showReport();
};// end student class
#endif