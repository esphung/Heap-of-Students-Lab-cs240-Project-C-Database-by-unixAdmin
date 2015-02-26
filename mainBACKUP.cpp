#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
#include "student.h"
#include "date.h"
using namespace std;
// prototype functions
void buildDatabase(string databaseFile, int);// pass data to student constructor
int getLineCount(string);// get line count from file
// main method var declarations
vector<string> myVector;
size_t pos;// position in token
string item;// variable store token
string delimiter = (",");
int i;
string databaseFile;

int main(){


	databaseFile = ("data.dat");
	buildDatabase(databaseFile, getLineCount(databaseFile));// build students

	cout << getLineCount(databaseFile) << endl;// get lines in text file






	return 0;
}// end main

void buildDatabase(string databaseFile, int lineCount){
	string last_name;
	string first_name;
	string first_address;
	string second_address;
	string city;
	string state;
	string zipcode;
	string birthday_date;
	string completion_date;
	string gpa;
	string credit_hours;
	int count = 0;// count the lines

	string line;
	int vectorReduced;
	ifstream myfile(databaseFile);
	if(myfile.is_open()){
		while(getline(myfile, line)){
		//while(getline(myfile, line, '\n'))
			try {
				while ((pos = line.find(delimiter)) != string::npos) {
					item = line.substr(0, pos);
					myVector.push_back(item);
					line.erase(0, pos + delimiter.length());
				}// end while
				// created new student object on the heap
				vectorReduced = (((myVector.size())/(10))-(1));
//				cout << "vectorSize reduced " << vectorReduced << endl;
					Student *student = new Student(myVector.at(i), myVector.at(i+1), myVector[i+2], myVector[i+3], myVector[i+4], myVector[i+5], myVector[i+6], myVector[i+7], myVector[i+8], myVector[i+9], "null!!!");
					i = i+10;
					//cout << "ACTUAL VECTOR SIZE: " << myVector.size() << endl;

					// TEMPORARY if statement;
					/*
					if (i > 0){
						i = i + 10;
						count++;
						std::cout << "Entries found:\t" << count << std::endl;
					}// end if
					*/
					/*else{
						i++;
					}// end else
					*/
					// make last calls, then destroy student
					cout << "Address (main):\t" << student[0].addressObject.first_address << endl;
					cout << "Address:\t" << student[0].addressObject.second_address << endl;
					cout << "City\t\t" << student[0].addressObject.city << endl;
					cout << "State:\t\t" << student[0].addressObject.state << endl;
					cout << "Zipcode:\t" << student[0].addressObject.zipcode << endl;
					cout << "DOB:\t\t" << student[0].birthdayObject.date << endl;
					cout << "Graduate:\t" << student[0].completionObject.date << endl;
					// DELETE HEAP STUDENT HERE!!!
					delete student;
			}// end try statement
			catch(const std::exception& e) {
				std::cout << "Uh oh. File format may be incorrect" << endl;
			}// end catch
		}// end while(GETLINE)
		myfile.close();
	}// end for
	else std::cout << "Could not open file" << std::endl;
}// end get data method


// method to count lines in file
int getLineCount(string databaseFile){
	int lineCount = 0;
		// get text lines from file
	string line;
	ifstream myfile (databaseFile);
	if(myfile.is_open()){
		while(getline(myfile, line, '\n')){
			lineCount++;
		}// end while
		myfile.close();
	}// end for
	else cout << "Could not open file" << endl;
	return lineCount;
}// end getLineCount




