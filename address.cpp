/*
* @Author: home
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   home
* @Last Modified time: 2015-02-25 15:10:39
*/
#include <iostream>
#include "address.h"
using namespace std;
int main(){
	// test unit vars
	string first_address = "4756 Mapleview Drive";
	string second_address = "Apt Hello World";
	string city = "Ripley";
	string state = "TN";
	string zipcode = "38063";

		Address newAddress = Address(first_address, second_address, city, state, zipcode);




    return 0;
}