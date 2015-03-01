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



int main(){
	//string databaseFile			=	"data.dat";
	std::ifstream							file("data.dat");
	TextInfo::TextInfo									row;
	TextInfo::TextInfo v;

	Student *newStudent = new Student();// create studen array

	int i;
	while(file >> row){
		// orginal code
		newStudent = new Student(row); // creat new student
		++i; // increment student count













		cout << "Number of passes: " << i << endl;
		cin.ignore();




	}// end while fill stream --> row
	//std::cout << typeid(newStudent).name() << '\n';// DEBUG

	delete newStudent; // delete student array







	return 0;
}// end main






