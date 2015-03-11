/* date.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   home
*/
#include <iostream>
#include "date.h"

Date::Date(){
	//std::cout << "HELLO NULL DATE" << std::endl;
}// end null

Date::Date(std::string rawInfo){
	// parse raw info
	std::string delimiter = "/"; // delimiter
	std::size_t pos = 0; // where to start parsing
	while ((pos = rawInfo.find(delimiter)) != std::string::npos) {
		token = rawInfo.substr(0, pos);
		Date::myDate.push_back(token);
		rawInfo.erase(0, pos + delimiter.length());
	} // end while
	Date::myDate.push_back(rawInfo); // get last token in line for back of vector





}// end overload constructor
Date::~Date(){
}// end destructor

// PUBLIC METHODS

// display human date
void Date::displayDate(){
		for (int i = 0; i < Date::myDate.size(); ++i){
			std::cout << Date::myDate[i] << std::endl;
		} // end for print out

} // end display Date

// return human date as var
std::string Date::getDate(){
	Date::date = Date::myDate[0] + "." + Date::myDate[1] + "." + Date::myDate[2];
	return Date::date;
} // end get date

