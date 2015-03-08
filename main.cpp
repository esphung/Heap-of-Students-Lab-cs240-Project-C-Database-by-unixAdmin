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
std::vector<string> nameVector;
std::vector<Student> studentVector;


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




void getNamesAlphabetical(){
	// for loop for sorting alphabetical
	for (int i = 1; i < studentVector.size(); ++i){
		//cout << "Student (" << i << "): ";
		nameVector.push_back(studentVector[i].last_name);
		//cout << nameVector.back() << endl;
	} // end for stuff name vector
	sort(nameVector.begin(), nameVector.end());
	for (int i = 0; i < nameVector.size(); ++i){
		cout << nameVector[i] << endl;
	} // end for sort print out
} // end get names ALPHABETIZED!!!






int main(){
	file.open("data.dat"); // open file
	Student *newStudent = new Student[51]; // heap of students


	int i = 0; // iterator count for file
	while (!file.eof()){
		myVector = getNextLineAndSplitIntoTokens(file);
		newStudent[i] = Student(myVector); // build student for heap array
		newStudent[i].getReport(); // display simple report of new student object
		studentVector.push_back(newStudent[i]); // save student in vector for easy use later
		++i;
		//cin.ignore();
	} // end while
	file.close(); // close file


	// using heap array!!!
	for (int i = 1; i < 51; ++i){
		cout << "Student (" << i << "): ";
		newStudent[i].displayNames();
	} // end for






	delete[] newStudent;




	return 0; // return for main
}// end main






