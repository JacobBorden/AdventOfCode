#include "functions.h"
#include <fstream>
#include <iostream>
#include <string>

int main()
{
	int sum =0;
	std::ifstream file("input.txt");

	if(!file.is_open()){
		std::cerr<<"Error opening file";
		return 1;
	}

	std::string line;

	while (std::getline(file, line)){
		line = line.substr(0,line.length()-1);
		int value = parseGame(line);
		std::cout<<std::endl<<value;
		sum += value;
	}

	file.close();
	std::cout<<std::endl<<sum<<std::endl;
	return 0;
}

