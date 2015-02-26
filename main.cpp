#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
#include "student.h"
#include "date.h"
using namespace std;
// prototype functions
void buildDatabase(std::string databaseFile, int);// pass data to student constructor
int getLineCount(std::string);// get line count from file
// main method var declarations
vector<string> myVector;
std::size_t pos;// position in token
std::string item;// variable store token
std::string delimiter = (",");
std::string databaseFile;
int i;


int main(){

	databaseFile = ("data.dat");
	buildDatabase(databaseFile, getLineCount(databaseFile));// build students
	std::cout << getLineCount(databaseFile) << std::endl;// get lines in text file


	return 0;
}// end main

void buildDatabase(std::string databaseFile, int lineCount){
	std::string last_name;
	std::string first_name;
	std::string first_address;
	std::string second_address;
	std::string city;
	std::string state;
	std::string zipcode;
	std::string birthday_date;
	std::string completion_date;
	std::string gpa;
	std::string credit_hours;

	std::string line;
	int vectorReduced;
	ifstream myfile(databaseFile);
	if(myfile.is_open()){
		while(getline(myfile, line)){
		//while(getline(myfile, line, '\n'))
			try {
				while ((pos = line.find(delimiter)) != std::string::npos) {
					item = line.substr(0, pos);
					myVector.push_back(item);
					line.erase(0, pos + delimiter.length());
				}// end while
				// created new student object on the heap
				vectorReduced = (((myVector.size())/(10))-(1));
				//cout << "vectorSize reduced " << vectorReduced << endl;
				Student *student = new Student(myVector.at(i), myVector.at(i+1), myVector[i+2], myVector[i+3], myVector[i+4], myVector[i+5], myVector[i+6], myVector[i+7], myVector[i+8], myVector[i+9], "null!!!");
					i = i+10;
					std::cout << "DOB:\t\t" << student[0].birthdayObject.date << std::endl;
					std::cout << "Graduate:\t" << student[0].completionObject.date << std::endl;
					// DELETE HEAP STUDENT HERE!!!
					delete student;
			}// end try statement
			catch(const std::exception& e) {
				std::cout << "Uh oh. File format may be incorrect" << std::endl;
			}// end catch
		}// end while(GETLINE)
		myfile.close();
	}// end for
	else std::cout << "Could not open file" << std::endl;
}// end get data method


// method to count lines in file
int getLineCount(std::string databaseFile){
	int lineCount = 0;
		// get text lines from file
	std::string line;
	ifstream myfile (databaseFile);
	if(myfile.is_open()){
		while(getline(myfile, line, '\n')){
			lineCount++;
		}// end while
		myfile.close();
	}// end for
	else std::cout << "Could not open file" << std::endl;
	return lineCount;
}// end getLineCount