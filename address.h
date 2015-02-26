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
private:
	string first_address;
	string second_address;
	string city;
	string state;
	string zipcode;

public:
	Address(){
		cout << "Hello: Address(with nuffin')" << endl;
	}// end null

	Address(string first_address, string second_address, string city, string state, string zipcode){
		cout << "Hello Address(with stuff)" << endl;
		cout << first_address << endl;
		cout << second_address << endl;
	}// end overload

	/* DESTRUC-TOR!!! */
	~Address(){
	}// end destructor

        /* Public Address methods */

};// end Address class

#endif