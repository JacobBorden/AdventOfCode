#ifndef _FUNCTION_H
#define _FUNCTION_H

#include <string>
#include <map>

bool isDigit(char c);
int findDigits(std::string s);
int findDigitsFromString(std::string s);

const std::map<std::string, int> num
{
	{"zero",0},
	{"one",1},
	{"two",2},
	{"three",3},
	{"four",4},
	{"five",5},
	{"six",6},
	{"seven",7},
	{"eight",8},
	{"nine",9}
};


#endif
