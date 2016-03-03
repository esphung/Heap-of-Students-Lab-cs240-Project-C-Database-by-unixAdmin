/* main.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   home
*/

#include <iterator>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

#include "student.h"
#include "date.h"

#include <string>
using namespace std;
// function prototypes
void displayNames();
std::vector<std::string> getNamesAlphabetical();
std::vector<std::string> getNextLineAndSplitIntoTokens(std::istream& str);

// global vars
std::string 					line;
std::stringstream 		sline;
std::string 					var;
std::ifstream 				file;
std::vector<string> 	myVector;
std::vector<string> 	nameVector;
std::vector<Student> 	studentVector;
std::vector<string> 	myLabels;





/* main code */
int main(){
	file.open("data.dat"); // open file
	Student *newStudent = new Student[51]; // heap of students
	//Student *sortedStudent = new Student[51];


	int i = 0; // iterator for line count

	// capture first line for labeling
	do {
	myLabels = getNextLineAndSplitIntoTokens(file); // labels for info human
	break;
	} while (i < 1); // end do while


	// while loop iterate thru file
	while (!file.eof()){

		myVector = getNextLineAndSplitIntoTokens(file);// tokenize each line in file
		newStudent[i] = Student(myVector); // build student for heap array
		newStudent[i].showReport(); // display simple report of new student object INCUDES DISPLAY DATE OBJECT METHOD
		std::cout << "\t================" << std::endl;

		studentVector.push_back(newStudent[i]); // save student in vector for easy use later MAYBE blackbelt

		++i;

	} // end while
	file.close(); // close file


	displayNames(); // simple name list
	//getNamesAlphabetical(); // show alphabetized names






	delete[] newStudent; // deallocated memory
	//delete[] sortedStudent; // deallocated memory
	return 0; // return for main
}// end main


// function defs
std::vector<std::string> getNamesAlphabetical(){
	// for loop for sorting alphabetical
	std::vector<std::string>   sortedNames;
	for (int i = 1; i < studentVector.size(); ++i){
		//cout << "Student (" << i << "): ";
		nameVector.push_back(studentVector[i].last_name);
		//cout << nameVector.back() << endl;
	} // end for stuff name vector
	sort(nameVector.begin(), nameVector.end());
	for (int i = 0; i < nameVector.size(); ++i){
		cout << nameVector[i] << endl;
	} // end for sort print out
	return sortedNames;
} // end get names ALPHABETIZED!!! def

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
} // end getline and tokenize function def


void displayNames(){
	for (int i = 0; i < studentVector.size(); ++i){
		std::cout << studentVector[i].name << std::endl;
	} // end for print out
	std::cout << "================" << std::endl;
} // end display names function

