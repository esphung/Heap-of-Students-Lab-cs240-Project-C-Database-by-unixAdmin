/* date.h
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/
#ifndef DATE_EXISTS
#define DATE_EXISTS
#include <string>
#include <vector>
class Date{
public:

	std::vector<std::string> myDate;
	std::string rawInfo;
	std::string date;
	std::string day;
	std::string month;
	std::string year;
	std::string token;


	Date();// end null
	Date(std::string rawInfo);// end overload constructor declarations
	~Date();// end destructor


};// end Date class
#endif