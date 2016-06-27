#include "PhoneticConverter.h"
#include <iostream>

int main() {
	PhoneticConverter converter;
	std::string str = "...";
	
	std::string output = "";

	for each (char a in str)
	{
		output += " " + converter.Phoneticize(a);
	}

	std::cout << output << std::endl;
	
	return 0;
}
