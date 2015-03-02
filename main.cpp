/* main.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/

#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include <typeinfo>//     --> std::cout << typeid(newStudent).name() << '\n';

#include "student.h"
#include "database.h"
#include "date.h"

#include <string>
using namespace std;





string argument = "Hello World";

//======================================
// dec/def function
std::istream& operator >> (std::istream& str, TextInfo& data){
	data.readNextLine(str);
	return str;
} // end input stream

//======================================
// METHODS
void showStudentsBy(std::vector<Student> heapArray);
void menu();
void showDatabase(std::vector<Student> heapArray);


int main(){
	int count = 1;
	string dbFile = "data.dat";
	std::ifstream							file(dbFile);
	TextInfo::TextInfo									row;
	std::vector<Student> heapArray; // vectors, by default, allocate elements from the heap
	menu(); // for user to choose menu option
	while(file >> row){
		Student newStudent = Student(row);
		heapArray.push_back(newStudent);
		++count; // increment student count

	}// end while fill stream --> row


	//showStudentsBy(heapArray);
	showDatabase(heapArray);







	return 0;
}// end main

void menu(){
	cout << "\t\tHello Database" << endl;
	cout << "(d)isplay database, (s)ort database, (a)dd new student, (q)uit" << endl;
	cin.ignore();
}// end menu function


void showDatabase(std::vector<Student> heapArray){
		if (false){
			//cout << "Number of passes: " << count << endl;
			for (int i = 0; i < heapArray.size(); ++i){
				heapArray[i].displayData();
				cout << heapArray[i].birthdayObject.date << endl;
				cout << heapArray[i].completionObject.date << endl;
			} // end for
		} // end if for user display all students

}


void showStudentsBy(std::vector<Student> heapArray){
	cout << "========   SORTED!!! ========" << endl;
	enum Sort {ALL, NAME, CITY, GRADE };
	//Sort show = NAME;
	Sort show = ALL;

	switch(show) {
		case NAME  : 	for (int i = 0; i < heapArray.size(); ++i){
			cout << heapArray[i].first_name << endl;
		}; break; // name case
		case CITY : for (int i = 0; i < heapArray.size(); ++i){
			cout << heapArray[i].addressObject.city + ", " + heapArray[i].addressObject.state << endl;
		}; break; // address case
		case GRADE  : for (int i = 0; i < heapArray.size(); ++i){
			cout << heapArray[i].last_name << ", " << heapArray[i].first_name + "\t(" + heapArray[i].gpa << ")" << endl;
	}; break; // grade case
		default : cout << "Oopsie!" << endl; break;
}



} // end show names