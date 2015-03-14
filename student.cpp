/* student.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   home
*/
#include <vector>
#include <string>
#include "student.h"


Student::Student(){
	//std::cout << "null" << std::endl;
}// end null student constructor

Student::Student(std::vector<std::string> rawInfo){
	//std::cout << "Student Created: " << std::endl;
	//std::cout << rawInfo.back() << std::endl;

	// property assignments ('Type::var' = EXPLICIT > IMPLICIT)
	Student::last_name = 					rawInfo[0];
	Student::first_name = 				rawInfo[1];
	Student::first_address = 			rawInfo[2];
	Student::second_address = 		rawInfo[3];
	Student::city = 							rawInfo[4];
	Student::state = 							rawInfo[5];
	Student::zipcode = 						rawInfo[6];
	Student::gpa = 								rawInfo[9];
	Student::credit_hours = 			rawInfo[10];

	Student::name = Student::last_name + ", " + Student::first_name; // student name for humans DEBUG purposes

	// Each Student object contains one address object
	Student::addressObject = Address::Address(rawInfo[2],rawInfo[3],rawInfo[4],rawInfo[5],rawInfo[6]);
	Student::address = Student::addressObject.Address::getAddress(); // get address var for humans

	// each student object has 2 date objects
	// dob date
	Student::birthdayObject = Date::Date(rawInfo[7]); // give dob date object values
	//Student::dob = Student::birthdayObject.getDate(); // dob date for humans

	// completion date
	Student::completionObject = Date::Date(rawInfo[8]); // give completion date object values
	//Student::comp = Student::completionObject.getDate();// get completion date for humans



} // end overload


Student::~Student(){}// end student destructor


// PUBLIC METHOD DEFINITIONS

void Student::showReport(){
	std::cout << "\tGetting report... " << std::endl;
	std::cout << "Last:\t\t" << Student::last_name << std::endl;
	std::cout << "First:\t\t" << Student::first_name << std::endl;
	std::cout << "Address:\t" << Student::address << std::endl;
	/*
	std::cout << "Address:\t" << addressObject.first_address << std::endl;
	std::cout << "Apartment:\t" << addressObject.second_address << std::endl;
	std::cout << "City:\t\t" << addressObject.city << std::endl;
	std::cout << "State:\t\t" << addressObject.state << std::endl;
	std::cout << "Zipcode:\t" << addressObject.zipcode << std::endl;
	*/
	std::cout << "Grade:\t\t" << Student::gpa << std::endl;
	std::cout << "Credit Hours:\t" << Student::credit_hours << std::endl;
	std::cout << "Birthday:\t" << Student::dob << std::endl;
	birthdayObject.displayDate(); // call to display method (optional)
	std::cout << "Completion:\t" << Student::comp << std::endl;
	completionObject.displayDate(); // call to display method (optional)

} // end get report

