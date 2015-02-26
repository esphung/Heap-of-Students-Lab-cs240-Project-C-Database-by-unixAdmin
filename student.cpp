// student.cpp
#include "student.h"
#include "date.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(){
	std::cout << "\tCreated null student ???" << std::endl;
}// end null student constructor

Student::Student(string last_name, string first_name, string first_address, string second_address, string city, string state, string zipcode, string birthday_date, string completion_date, string gpa, string credit_hours){
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

	// Student::self has 2 date objects
	// call with student[i].birthday_date.date
	Student::birthdayObject = Date(birthday_date);
	Student::completionObject = Date(completion_date);

	std::cout << "  ========================" << std::endl;
	std::cout << "\t" << first_name << " " << last_name << " was found." << endl;
	displayData();
}// end overload constructor

Student::~Student(){
	// problem with parsing is in this arg
	//std::cout << first_name;
	cout << "\t" << first_name << " " << last_name << " was destroyed." << endl;
}// end student destructor


void Student::displayData(){
	//cout << "Hello Student display method" << endl;
	cout << "Last:\t\t" << last_name << endl;
	cout << "First:\t\t" << first_name << endl;
	cout << "Address:\t" << first_address << endl;
	cout << "Address:\t" << second_address << endl;
	cout << "City:\t\t" << city << endl;
	cout << "State:\t\t" << state << endl;
	cout << "Zipcode:\t" << zipcode << endl;
	//cout << "D.O.B.:\t\t" << birthday_date << endl;
	//cout << "Completion:\t" << completion_date << endl;
	//cout << "Completion:\t" <<  << endl;
	cout << "Grade:\t\t" << gpa << endl;
	cout << "Credit Hours:\t" << credit_hours << endl;








}// end display method
