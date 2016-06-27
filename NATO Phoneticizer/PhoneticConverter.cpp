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
	{ 'f',"Foxtrot" },
	{ 'g',"Golf" },
	{ 'h',"Hotel" },
	{ 'i',"India" },
	{ 'j',"Juliet" },
	{ 'k',"Kilo" },
	{ 'l',"Lima" },
	{ 'm',"Mike" },
	{ 'n',"November" },
	{ 'o',"Oscar" },
	{ 'p',"Papa" },
	{ 'q',"Quebec" },
	{ 'r',"Romeo" },
	{ 's',"Sierra" },
	{ 't',"Tango" },
	{ 'u',"Uniform" },
	{ 'v',"Victor" },
	{ 'w',"Whiskey" },
	{ 'x',"X-ray" },
	{ 'y',"Yankee" },
	{ 'z',"Zulu" },
	{ '.', "." },
	{ ',', ","},
	{ ' ', ""}
};

PhoneticConverter::~PhoneticConverter()
{
}
