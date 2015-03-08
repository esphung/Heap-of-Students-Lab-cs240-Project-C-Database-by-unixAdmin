#ifndef DATABASE_EXISTS
#define DATABASE_EXISTS



// class to stream info into the student constructor
class TextInfo{
private:
	// vector is private member or TextInfo
	std::vector<std::string> new_data;
public:
	std::string const& operator[](std::size_t index) const
	{
		return new_data[index];
	}
	std::size_t size() const{
		return new_data.size();
	}

// remove these egyption bracks for definiton elsewhere
	TextInfo();
	~TextInfo();

	void readNextLine(std::istream&);


};// end TextInfo class
#endif