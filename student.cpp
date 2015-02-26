/* student.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/
#include "student.h"
Student::Student(){
	std::cout << "\tCreated null student ???" << std::endl;
}// end null student constructor

Student::Student(string last_name, string first_name, string first_address, string second_address, string city, string state, string zipcode, string birthday_date, string completion_date, string gpa, string credit_hours){
	// Student object contains one address object
	Student::addressObject = Address(first_address,second_address,city,state,zipcode);
	// student has 2 date objects
	Student::birthdayObject = Date(birthday_date);
	Student::completionObject = Date(completion_date);
	Student::last_name = last_name;
	Student::first_name = first_name;
	Student::first_address = first_address;
	Student::second_address = second_address;
	Student::city = city;
	Student::state = state;
	Student::zipcode = zipcode;
	Student::birthday_date = birthday_date;
	Student::completion_date = completion_date;
	Student::gpa = gpa;
	Student::credit_hours = credit_hours;

	std::cout << "  ========================" << std::endl;
	std::cout << "\t" << first_name << " " << last_name << " was found." << std::endl;
	displayData();
}// end overload constructor

Student::~Student(){
	// problem with parsing is in this arg
	//std::cout << first_name;
	std::cout << "\t" << first_name << " " << last_name << " was destroyed." << std::endl;
}// end student destructor

void Student::displayData(){
	//cout << "Hello Student display method" << endl;
	std::cout << "Last:\t\t" << last_name << std::endl;
	std::cout << "First:\t\t" << first_name << std::endl;
	std::cout << "Address:\t" << Student::addressObject.first_address << std::endl;
	std::cout << "Apartment:\t" << Student::addressObject.second_address << std::endl;
	std::cout << "City:\t\t" << Student::addressObject.city << std::endl;
	std::cout << "State:\t\t" << Student::addressObject.state << std::endl;
	std::cout << "Zipcode:\t" << Student::addressObject.zipcode << std::endl;
	std::cout << "Grade:\t\t" << gpa << std::endl;
	std::cout << "Credit Hours:\t" << credit_hours << std::endl;
}// end display method