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

	Student *newStudent = new Student();

	int i;
	while(file >> row){
		// orginal code
		std::cout 	<< 	"Requested Entry : "	<<	row[2]	<< std::endl;
		newStudent = new Student(row);


		i++;
		//cout << Student::newStudent.addressObject << endl;



	}// end while fill stream --> row
	//std::cout << typeid(newStudent).name() << '\n';// DEBUG

	cout << "Number of passes: " << i << endl;

	delete newStudent;




	/* Student::variable = ???
	last_name 		=  	row[0];
	first_name		=		row[1];
	first_address	=		row[2];
	second_address=		row[3];
	city					=		row[4];
	state					=		row[5];
	zipcode				=		row[6];
	birthday_date	=		row[7];
	completion_date =	row[8];
	gpa 					=		row[9];
	credit_hours	=		row[10];

	*/











	return 0;
}// end main






