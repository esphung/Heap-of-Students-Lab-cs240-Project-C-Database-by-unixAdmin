/* date.h
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/
#ifndef DATE_EXISTS
#define DATE_EXISTS
#include <iostream>
#include <vector>
class Date{
private:
	std::string rawInfo;
	std::string token;
	std::string date;
	std::vector<std::string> myDate;
public:



	Date();// end null
	Date(std::string rawInfo);// end overload constructor declarations
	~Date();// end destructor

	void displayDate();
	std::string getDate();


};// end Date class
#endif