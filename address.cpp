/*
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   home
*/
#include <iostream>
#include <string>
#include "address.h"
using namespace std;

Address::Address(){
	//cout << "Hello: Address(with nuffin')" << endl;
}// end null
Address::Address(string first_address, string second_address, string city, string state, string zipcode){
	/* inherited vars */
	Address::first_address = first_address;
	Address::second_address = second_address;
	Address::city = city;
	Address::state = state;
	Address::zipcode = zipcode;

}// end overload
Address::~Address(){}// end destructor