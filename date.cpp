/* date.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   home
*/
#include "date.h"
Date::Date(){
}// end null
Date::Date(std::string date){
	Date::date = date;

	Date::birthday_date = date;
	Date::completion_date = date;
}// end overload constructor
Date::~Date(){
}// end destructor