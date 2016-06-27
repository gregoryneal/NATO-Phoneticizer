#include "PhoneticConverter.h"

PhoneticConverter::PhoneticConverter()
{

}

std::string PhoneticConverter::Phoneticize(char character)
{
	return MapFromLetterToNATOPhoneticAlphabet[tolower(character)];
}

std::unordered_map<char, std::string> PhoneticConverter::MapFromLetterToNATOPhoneticAlphabet = {
	{ 'a', "Alpha" },
	{ 'b', "Bravo" },
	{ 'c', "Charlie" },
	{ 'd', "Delta" },
	{ 'e', "Echo" },
	{ 'f', "Foxtrot" },
	{ 'g', "Golf" },
	{ 'h', "Hotel" },
	{ 'i', "India" },
	{ 'j', "Juliet" },
	{ 'k', "Kilo" },
	{ 'l', "Lima" },
	{ 'm', "Mike" },
	{ 'n', "November" },
	{ 'o', "Oscar" },
	{ 'p', "Papa" },
	{ 'q', "Quebec" },
	{ 'r', "Romeo" },
	{ 's', "Sierra" },
	{ 't', "Tango" },
	{ 'u', "Uniform" },
	{ 'v', "Victor" },
	{ 'w', "Whiskey" },
	{ 'x', "X-ray" },
	{ 'y', "Yankee" },
	{ 'z', "Zulu" },
	{ ' ', " " },
	{ '.', "." },
	{ ',', ","},
	{ '\'', "'"},
	{ '-', "-"},
	{ '!', "!" },
	{ '?', "?" },
	{ '1', "1" },
	{ '2', "2" },
	{ '3', "3" },
	{ '4', "4" },
	{ '5', "5" },
	{ '6', "6" },
	{ '7', "7" },
	{ '8', "8" },
	{ '9', "9" },
	{ '0', "0" }
};

PhoneticConverter::~PhoneticConverter()
{
}
