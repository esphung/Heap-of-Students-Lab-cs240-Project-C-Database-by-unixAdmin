/* address.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   home
*/
#include <iostream>
#include "address.h"
Address::Address(){}// end null
Address::Address(std::string first_address, std::string second_address, std::string city, std::string state, std::string zipcode){
	/* var defs */
	Address::first_address = first_address;
	Address::second_address = second_address;
	Address::city = city;
	Address::state = state;
	Address::zipcode = zipcode;



	//std::string getAddress();


}// end overload
Address::~Address(){}// end destructor

// PUBLIC METHODS
std::string Address::getAddress(){
	Address::address = Address::first_address + "\n\t\t" + Address::second_address + "\n\t\t" + Address::city + "\n\t\t" + Address::state + "\n\t\t" + Address::zipcode;
	return Address::address;
} // end get address