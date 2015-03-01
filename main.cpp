/* main.cpp
* @Author: Eric Scott Phung
* @Date:   2015-02-25 14:44:54
* @Last Modified by:   Eric Phung
*/
#include <vector>
#include <fstream>
#include "student.h"
#include <iostream>


#include <string>
using namespace std;

// prototype functions
Student student(string myKeysVector);
//void getData(std::string databaseFile);// pass data to student constructor
//int getLineCount(std::string);// get line count from file
//void setStudent(std::string last_name, std::string first_name, std::string first_address, std::string second_address, std::string city, std::string state, std::string zipcode, std::string birthday_date, std::string completion_date, std::string gpa, std::string credit_hours);// set new student object information
// main method var declarations
std::size_t pos;// position in token
std::string item;// variable store token
std::string delimiter = (",");
std::string databaseFile;
std::string line;
std::vector<std::string> myVector(0);
int i;



string argument = "Hello World";
std::vector<std::string> myKeysVector(0);


void getData(string databaseFile){
	std::string line;
	std::ifstream myfile(databaseFile.c_str());
	if(myfile.is_open()){
		while(getline(myfile, line)){
			while ((pos = line.find(",")) != std::string::npos) {
					item = line.substr(0, pos);
					myVector.push_back(item);
                    //cout << myVector[i] << endl;
					// the entries were being erased here!!!
                    line.erase(0, pos + delimiter.length());
					cout << line << endl;
					cout << "==============" << endl;
                    cout << "Feed from line --> " << item << endl;
                    cin.ignore();// before transfer
                    
                    std::vector<int>::iterator j;
                    for(int j = 0; j <= line.size(); j++){
                        //myVector.clear();
                        cout << "Last element in VECTOR --> " << myVector.back() << endl;
                        cout << "Should end at credit_hours)" << endl;
                       
                        if(i == 10){
                            myVector.clear();// wipe the vector
                            cout << "Cleared Vector, Back = " << myVector.back() << " and front == " << myVector.front() << "\n" << endl;
                            cout << "Vector capacity is now : " << myVector.capacity() << endl;
                            myVector.swap(myKeysVector);
                        }// clear the vector and reinit



                        break;
                    }// break out, else will be coppied 10 times

                    cin.ignore();// after transfer
                    cout << "First element in VECTOR --> " << myVector.front() << endl;

                    cin.ignore();//
                    
                    //cout << myVector.size() << endl;
				}// end while getline()
				//cout << line << endl;
				// vector +10 HERE COPIED TO KEYS!!! ==========
				myKeysVector.insert(myKeysVector.begin(), myVector.begin(), myVector.end());// YES INSERTINO OF KEYS!
				// nOW TO JOIN THEM, ONE to MANY!
				//cout << "CAPACITY KEYS VEC" << myKeysVector.capacity() << endl;
				//cout << "CAPACITY True VEC" << myVector.capacity() << endl;
				//break;
		}// end while
	}// end if
	cout << "(DEBUG) HEAP VEC SIZE: " << myVector.size() << endl;
	cout << "(DEBUG) EXPLICIT KEY VEC: " << myKeysVector.size() << endl;
	for(int i = 0; i < myVector.size(); i++) {
        cout << myVector.at(i) << endl;        
    };// end log iterloop)
}; // end get data function




int main(){
	databaseFile = ("data.dat");


	getData(databaseFile);
	//Student *studentObject = new Student();
	//studentObject[0] = Student(myKeysVector);
    Student student;





	//delete studentObject;

	//getData(databaseFile);// build database AND returns number of datum found
	//std::cout << getLineCount(databaseFile) << std::endl;// display lines in text file


	return 0;
}// end main
