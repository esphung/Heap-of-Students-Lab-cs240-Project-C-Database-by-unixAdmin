// main.cpp
#include <vector>
#include <fstream>
#include "student.h"
// prototype functions
void getData(std::string databaseFile);// pass data to student constructor
int getLineCount(std::string);// get line count from file
void setStudent(string last_name, string first_name, string first_address, string second_address, string city, string state, string zipcode, string birthday_date, string completion_date, string gpa, string credit_hours);// set new student object information

// main method var declarations
std::size_t pos;// position in token
std::string item;// variable store token
std::string delimiter = (",");
std::string databaseFile;
std::string line;
vector<string> myVector;
int i;

int main(){

	databaseFile = ("data.dat");
	getData(databaseFile);// build database AND returns number of datum found
	std::cout << getLineCount(databaseFile) << std::endl;// display lines in text file

	return 0;
}// end main

void getData(std::string databaseFile){
	std::string line;
	ifstream myfile(databaseFile);
	if(myfile.is_open()){
		while(getline(myfile, line)){
			while ((pos = line.find(delimiter)) != std::string::npos) {
				item = line.substr(0, pos);
				myVector.push_back(item);
				line.erase(0, pos + delimiter.length());
			}// end while
			setStudent(myVector.at(i), myVector.at(i+1), myVector[i+2], myVector[i+3], myVector[i+4], myVector[i+5], myVector[i+6], myVector[i+7], myVector[i+8], myVector[i+9], "null!!!");
			i = i+10;
		}// end while(GETLINE())
		myfile.close();
	}// end if statement
}// end get data method


// method to count lines in file
int getLineCount(std::string databaseFile){
	int lineCount = 0;
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

void setStudent(string last_name, string first_name, string first_address, string second_address, string city, string state, string zipcode, string birthday_date, string completion_date, string gpa, string credit_hours){
	Student *setStudents = new Student(myVector.at(i), myVector.at(i+1), myVector[i+2], myVector[i+3], myVector[i+4], myVector[i+5], myVector[i+6], myVector[i+7], myVector[i+8], myVector[i+9], "null!!!");
	std::cout << "DOB:\t\t" << setStudents[0].birthdayObject.date << std::endl;
	std::cout << "Graduate:\t" << setStudents[0].completionObject.date << std::endl;
	delete setStudents;
}// end set student method