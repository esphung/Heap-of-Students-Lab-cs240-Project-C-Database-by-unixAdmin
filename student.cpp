/* student.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/
#include <vector>
#include "student.h"


Student::Student(){
	//std::cout << "null" << std::endl;
}// end null student constructor

Student::Student(TextInfo& row){
	//std::cout << "OVERloaded student" << std::endl;
	Student::row = row;
	// Student object contains one address object


	last_name = row[0];
	first_name = row[1];
	first_address = row[2];
	second_address = row[3];
	city = row[4];
	state = row[5];
	zipcode = row[6];
	birthday_date = row[7];
	completion_date = row[8];
	gpa = row[9];
	credit_hours = row[10];

	// student has 2 date objects
	Student::birthdayObject = Date(birthday_date);
	Student::completionObject = Date(completion_date);
	// student has one address object
	Student::addressObject = Address(first_address,second_address,city,state,zipcode);
	displayData();
}// end overload constructor

Student::~Student(){}// end student destructor

void Student::displayData(){
	std::cout << "  ========================" << std::endl;
	std::cout << "\t" << first_name << " " << last_name << " was found." << std::endl;
	std::cout << "Last:\t\t" << last_name << std::endl;
	std::cout << "First:\t\t" << first_name << std::endl;
	std::cout << "Address:\t" << addressObject.first_address << std::endl;
	std::cout << "Apartment:\t" << addressObject.second_address << std::endl;
	std::cout << "City:\t\t" << addressObject.city << std::endl;
	std::cout << "State:\t\t" << addressObject.state << std::endl;
	std::cout << "Zipcode:\t" << addressObject.zipcode << std::endl;
	std::cout << "Grade:\t\t" << gpa << std::endl;
	std::cout << "Credit Hours:\t" << credit_hours << std::endl;
}// end display method