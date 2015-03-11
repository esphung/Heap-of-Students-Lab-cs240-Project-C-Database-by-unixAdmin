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
	std::string delimiter = "/";
	size_t pos = 0;

	while ((pos = rawInfo.find(delimiter)) != std::string::npos) {
	    token = rawInfo.substr(0, pos);
	    myDate.push_back(token);
	    rawInfo.erase(0, pos + delimiter.length());
	} // end while
	myDate.push_back(rawInfo);

	day = myDate[0];
	month = myDate[1];
	year = myDate[2];
	// date display for humans
	date = day + "/" + month + "/" + year;




}// end overload constructor
Date::~Date(){
}// end destructor
