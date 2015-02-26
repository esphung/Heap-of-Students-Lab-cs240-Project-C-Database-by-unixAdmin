// date.h (independent header)
#ifndef DATE_EXISTS
#define DATE_EXISTS
#include <iostream>
#include <string>
using namespace std;

class Date{
private:
public:
	std::string date;
	std::string birthday_date;
	std::string completion_date;

	Date();// end null
	Date(std::string date);// end overload constructor declarations
	~Date();// end destructor

	// public method decs
	//void displayDate();
};// end Date class

#endif
