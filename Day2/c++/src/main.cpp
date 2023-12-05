#include "functions.h"
#include <fstream>
#include <iostream>
#include <string>

int main()
{
	int sum =0;
	int totalPower=0;
	std::ifstream file("input.txt");

	if(!file.is_open()){
		std::cerr<<"Error opening file";
		return 1;
	}

	std::string line;

	while (std::getline(file, line)){
		line = line.substr(0,line.length()-1);
		Game game(line);
		if(game.isPossible())
			sum += game.gameNumber();
		totalPower += game.getPower();
	}

	file.close();
	std::cout<<"Total Sum of Possible Games:"<<std::endl<<sum<<std::endl;
	std::cout<<"Total Power"<<std::endl<<totalPower<<std::endl;
	return 0;
}

