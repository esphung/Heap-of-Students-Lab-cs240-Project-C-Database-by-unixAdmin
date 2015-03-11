/* student.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   home
*/
#include <vector>
#include <string>
#include "student.h"
// global decs
//std::vector<std::string> myDate;


Student::Student(){
	//std::cout << "null" << std::endl;
}// end null student constructor

Student::Student(std::vector<std::string> rawInfo){
	//std::cout << "Student Created: " << std::endl;
	//std::cout << rawInfo.back() << std::endl;

	last_name = rawInfo[0];
	first_name = rawInfo[1];
	first_address = rawInfo[2];
	second_address = rawInfo[3];
	city = rawInfo[4];
	state = rawInfo[5];
	zipcode = rawInfo[6];
	//birthday_date = rawInfo[7];
	//completion_date = rawInfo[8];

	gpa = rawInfo[9];
	credit_hours = rawInfo[10];

	// Each Student object contains one address object
	addressObject = Address(rawInfo[2],rawInfo[3],rawInfo[4],rawInfo[5],rawInfo[6]);
	// student has 2 date objects
	birthdayObject = Date(rawInfo[7]);
	completionObject = Date(rawInfo[8]);



	//displayNames();



} // end overload


Student::~Student(){}// end student destructor


void Student::getReport(){
	std::cout << "Getting report... " << std::endl;
	std::cout << "Last:\t\t" << last_name << std::endl;
	std::cout << "First:\t\t" << first_name << std::endl;
	std::cout << "Address:\t" << addressObject.first_address << std::endl;
	std::cout << "Apartment:\t" << addressObject.second_address << std::endl;
	std::cout << "City:\t\t" << addressObject.city << std::endl;
	std::cout << "State:\t\t" << addressObject.state << std::endl;
	std::cout << "Zipcode:\t" << addressObject.zipcode << std::endl;
	std::cout << "Grade:\t\t" << gpa << std::endl;
	std::cout << "Credit Hours:\t" << credit_hours << std::endl;
	std::cout << "Birthday:\t" << birthdayObject.day + "/" + birthdayObject.month + "/" + birthdayObject.year << std::endl;
	std::cout << "Completion:\t" << completionObject.day + "/" + completionObject.month + "/" + completionObject.year << std::endl;

} // end get report


// define public methods of student
void Student::displayNames(){
	std::cout << last_name << ", " << first_name << std::endl;
}// end display method