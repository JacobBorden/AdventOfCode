#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

bool isDigit(char c)
{
	if(c >= '0' && c <= '9')
		return true;
	return false;
}

int findDigits(std::string s)
{
	int firstDigit = -1;
	int lastDigit = -1;
	for(char c:s)
	{
		if(isDigit(c))
		{
			if(firstDigit == -1)
				firstDigit = std::atoi(c);
			lastDigit = std::atoi(c);
		}
	}
	int value = (firstDigit * 10) + lastDigit;
	return value;
}

int main()
{
	return 0; 
}
