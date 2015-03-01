/* student.cpp
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

#include "database.h"

using namespace std;

TextInfo::TextInfo(){};
TextInfo::~TextInfo(){};


void TextInfo::readNextLine(std::istream& str){
	std::string 			line;
	std::getline(str,line);

	std::stringstream	lineStream(line);
	std::string 			cell;

	new_data.clear();
	while(std::getline(lineStream,cell,','))
	{
		new_data.push_back(cell);
	}
} // end read next line