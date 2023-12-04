#include <string>
#include "functions.h"
#include <vector>

bool isDigit(char c)
{
	return c >= '0' && c <= '9';

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
	std::vector<int> digits;

	for(int i=0; i< s.length(); i++)
	{
		if(isDigit(s[i]))
		{

			digits.push_back(s[i]-'0');
		}

		else {
			int j=0;
			while(!isDigit(s[i+j]) && j <= 5 )
				j++;
			std::string str = s.substr(i,j);
			int result = findDigitsFromString(str);
			if(result != -1 )
			{
				digits.push_back(result);

			}
		}
	}


	if(!digits.empty())
	{
		int value = digits[0] * 10 + digits[digits.size()-1];
		return value;
	}
	return -1;
}

