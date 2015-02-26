// date.cpp (independent class)
#include "date.h"
#include <iostream>
#include <string>
using namespace std;

Date::Date(){
	//cout << "Created date object (null)" << endl;
}// end null

Date::Date(string date){
	Date::date = date;
	// optional data members if sorting students by date
	Date::birthday_date = date;
	Date::completion_date = date;

}// end overload constructor

Date::~Date(){
	//std::cout << "Date object was destroyed" << std::endl;
}// end destructor


/*
void Date::displayDate(){
	//std::cout << "Displaying dates:\t";
	std::cout << "Date:\t" << date << std::endl;
}// end display method

*/
