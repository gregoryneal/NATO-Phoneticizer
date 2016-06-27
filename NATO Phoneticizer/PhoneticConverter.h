#include <string>
#include <unordered_map>
#include <cctype>

#pragma once
class PhoneticConverter
{
	static std::unordered_map<char, std::string> MapFromLetterToNATOPhoneticAlphabet;
public:
	PhoneticConverter();
	std::string Phoneticize(char character);
	~PhoneticConverter();
};

