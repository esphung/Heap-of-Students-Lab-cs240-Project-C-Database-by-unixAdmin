/* main.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/

#include <iterator>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include <typeinfo>//     --> std::cout << typeid(newStudent).name() << '\n';

#include "student.h"
//#include "database.h"
#include "date.h"

#include <string>
using namespace std;


std::string 				line;
std::stringstream 	sline;
std::string 				var;
std::ifstream 			file;
std::vector<string> myVector;


std::vector<std::string> getNextLineAndSplitIntoTokens(std::istream& str){
	std::vector<std::string>   result;
	std::string                line;
	std::getline(str,line);

	std::stringstream          lineStream(line);
	std::string                cell;

	while(std::getline(lineStream,cell,',')){
	    result.push_back(cell);
	} // end while
	return result;
} // end getline and tokenize function



int main(){
	file.open("data.dat"); // open file
	Student *newStudent = new Student[51]; // heap of students



	int i = 0;
	while (!file.eof()){
		myVector = 			getNextLineAndSplitIntoTokens(file);
		newStudent[i] = Student(myVector);
		++i;
		cin.ignore();
	} // end while



	file.close(); // close file




	delete[] newStudent;




	return 0; // return for main
}// end main






