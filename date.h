/* date.h
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/
#ifndef DATE_EXISTS
#define DATE_EXISTS
#include <string>
class Date{
public:
	std::string date;
	std::string birthday_date;
	std::string completion_date;
	Date();// end null
	Date(std::string date);// end overload constructor declarations
	~Date();// end destructor
};// end Date class

#endif
