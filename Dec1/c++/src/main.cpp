#include "functions.h"
#include <fstream>
#include <iostream>
#include <string>

int main()
{
	int sum=0;
	std::ifstream file("input.txt");
	
	if (!file.is_open()) {
        	std::cerr << "Error opening file" << std::endl;
        	return 1;
    	}

	std::string line;
	
	while(std::getline(file, line)){
	int value= findDigits(line);
	std::cout<<std::endl<<value;
	sum += value;
	}
	
	file.close();
	std::cout<<std::endl<<sum<<std::endl;
	return 0;
}
