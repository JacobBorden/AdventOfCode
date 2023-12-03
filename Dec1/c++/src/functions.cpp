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
	int i=0;
	for(int i=0; i< s.length(); i++)
	{
		if(isDigit(s[i]))
		{
			str.clear();
			if(firstDigit == -1)
				firstDigit = std::atoi(&s[i]);
			lastDigit = std::atoi(&s[i]);
		}

		else {
			for(int j = i; j <s.length(); j++){

				str = s.substr(i, j-i+1);
				int result = findDigitsFromString(str);
				if(result != -1 )
				{
					if(firstDigit == -1)
						firstDigit = result;
					lastDigit = result;
				}
			}
		}

	}
	int value = (firstDigit * 10) + lastDigit;
	return value;
}

