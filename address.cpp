/* address.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/
#include <iostream>
#include "address.h"
Address::Address(){}// end null
Address::Address(std::string first_address, std::string second_address, std::string city, std::string state, std::string zipcode){
	/* vars */
	Address::first_address = first_address;
	Address::second_address = second_address;
	Address::city = city;
	Address::state = state;
	Address::zipcode = zipcode;
}// end overload
Address::~Address(){}// end destructor