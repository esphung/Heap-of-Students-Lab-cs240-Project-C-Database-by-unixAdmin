#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int getLineCount(string);// get line count from file


int main(){

	cout << "Hello Read File" << endl;
	std::string databaseFile = ("data.dat");

	getLineCount(databaseFile);




	return 0;
};// end main

int getLineCount(string databaseFile){
	int lineCount;
		// get text lines from file
	string line;
	ifstream myfile (databaseFile);
	if(myfile.is_open()){
		while(getline(myfile, line, '\n')){
			cout << line << endl;
			lineCount++;
			cout << lineCount << endl;
		}// end while
		myfile.close();
	}// end for
	else cout << "Could not open file" << endl;
	return lineCount;
}// end getLineCount