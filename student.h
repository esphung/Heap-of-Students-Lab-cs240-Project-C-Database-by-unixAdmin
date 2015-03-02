/* student.h
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/
#ifndef STUDENT_EXISTS
#define STUDENT_EXISTS
#include "date.h"
#include "address.h"
#include "database.h"
#include <iostream>
#include <vector>
class Student{
private:

public:
	std::string last_name;
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
	TextInfo row;

	Student();

	Student(TextInfo::TextInfo&);
	Date birthdayObject;
	Date completionObject;
	Address addressObject;


/*
	Student(std::vector<std::string>);
	// date and address instantiation
	Date birthdayObject;
	Date completionObject;
	Address addressObject;

*/
	~Student();// destructor
	void displayData();// public method declaration
};// end student class
#endif