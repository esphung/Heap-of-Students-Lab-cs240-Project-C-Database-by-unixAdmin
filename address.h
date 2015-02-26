/* address.h
* @Author: home
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   home
* @Last Modified time: 2015-02-25 14:46:03
*/
//FILE:     STUDENT CLASS HEADER FILE
//AUTHOR:   Eric Scott Phung
#ifndef ADDRESS_EXISTS
#define ADDRESS_EXISTS
class Address{
public:
	std::string first_address;
	std::string second_address;
	std::string city;
	std::string state;
	std::string zipcode;
	Address();// null declaration
	Address(std::string first_address, std::string second_address, std::string city, std::string state, std::string zipcode);// overload declaration
	~Address();// destructor declaration
};// end Address class
#endif