#include <string>
#include "functions.h"


bool isDigit(char c)
{
	if(c >= '0' && c <= '9')
		return true;
	return false;
}

int findDigitsFromString(std::string s)
{
	for(const auto& [str, value]:num)
	{
		size_t pos = s.find(str);
		if(pos != std::string::npos)
			return value;
	}
	return -1;
}

int findDigits(std::string s)
{
	int firstDigit = -1;
	int lastDigit = -1;
	std::string str;
	
	for(char c:s)
	{ 
		if(isDigit(c))
		{
			str.clear();
			if(firstDigit == -1)
				firstDigit = std::atoi(&c);
			lastDigit = std::atoi(&c);
		}

		else {
			str +=c;
			int result = findDigitsFromString(str);
			if(result != -1 )
			{
				if(firstDigit == -1)
					firstDigit = result;
				lastDigit = result;
				str.clear();
			}
		}
	
	}
	int value = (firstDigit * 10) + lastDigit;
	return value;
}

