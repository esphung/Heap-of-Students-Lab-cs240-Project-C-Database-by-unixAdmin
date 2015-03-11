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
private:
	std::string first_address;
	std::string second_address;
	std::string city;
	std::string state;
	std::string zipcode;
	std::string address;
public:


	Address();// null constructor dec
	Address(std::string first_address, std::string second_address, std::string city, std::string state, std::string zipcode);// overload declaration
	~Address();// destructor declaration

	std::string getAddress();

};// end Address class
#endif