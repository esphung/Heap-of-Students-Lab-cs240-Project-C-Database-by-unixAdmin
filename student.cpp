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

Student::Student(TextInfo& row){
	std::cout << "OVERloaded student" << std::endl;

	Student::row = row;

	// Student object contains one address object
	Student::addressObject = Address(row[2],row[3],row[4],row[5],row[6]);
	// student has 2 date objects

	Student::birthdayObject = Date(row[7]);
	Student::completionObject = Date(row[8]);
	Student::last_name = row[0];
	Student::first_name = row[1];
	Student::first_address = row[2];
	Student::second_address = row[3];
	Student::city = row[4];
	Student::state = row[5];
	Student::zipcode = row[6];
	Student::birthday_date = row[7];
	Student::completion_date = row[8];
	Student::gpa = row[9];
	Student::credit_hours = row[10];


	std::cout << "  ========================" << std::endl;
	std::cout << "\t" << row[1] << " " << row[0] << " was found." << std::endl;
	displayData();
}// end overload constructor



/*
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
	//Student::credit_hours = myKeysVector.at(9);
	std::cout << "  ========================" << std::endl;
	std::cout << "\t" << myKeysVector.at(1) << " " << myKeysVector.at(0) << " was found." << std::endl;
	displayData();
}// end overload constructor

*/

Student::~Student(){}// end student destructor
void Student::displayData(){
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