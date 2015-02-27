/* student.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/
#include <vector>
#include "student.h"
Student::Student(){
	std::cout << "null" << std::endl;
}// end null student constructor
Student::Student(std::vector<std::string> myKeysVector){
	std::cout << "OVERloaded student" << std::endl;
	// Student object contains one address object
	Student::addressObject = Address(myKeysVector.at(2),myKeysVector.at(3),myKeysVector.at(4),myKeysVector.at(5),myKeysVector.at(6));
	// student has 2 date objects
	Student::birthdayObject = Date(myKeysVector.at(7));
	Student::completionObject = Date(myKeysVector.at(8));
	Student::last_name = myKeysVector.at(0);
	Student::first_name = myKeysVector.at(1);
	Student::first_address = myKeysVector.at(2);
	Student::second_address = myKeysVector.at(3);
	Student::city = myKeysVector.at(4);
	Student::state = myKeysVector.at(5);
	Student::zipcode = myKeysVector.at(6);
	Student::birthday_date = myKeysVector.at(7);
	Student::completion_date = myKeysVector.at(8);
	Student::gpa = myKeysVector.at(9);
	Student::credit_hours = myKeysVector.at(9);
	std::cout << "  ========================" << std::endl;
	std::cout << "\t" << myKeysVector.at(1) << " " << myKeysVector.at(0) << " was found." << std::endl;
	displayData();
}// end overload constructor
Student::~Student(){}// end student destructor
void Student::displayData(){
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