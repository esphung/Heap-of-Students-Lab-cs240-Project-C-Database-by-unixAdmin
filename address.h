/*
* @Author: home
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   home
* @Last Modified time: 2015-02-25 14:46:03
*/
//FILE:     STUDENT CLASS HEADER FILE
//AUTHOR:   Eric Scott Phung
#ifndef ADDRESS_EXISTS
#define ADDRESS_EXISTS

using namespace std;

class Address{
public:
	string first_address;
	string second_address;
	string city;
	string state;
	string zipcode;
	Address();// null declaration
	Address(string first_address, string second_address, string city, string state, string zipcode);// overload declaration
	~Address();// destructor declaration

	/* Public Address methods */

};// end Address class

#endif