#include <vector>
#include <string>
#include "functions.h"

bool roundIsPossible(int red, int green, int blue)
{
	if(red <= REDMAX && green <=GREENMAX && blue <= BLUEMAX)
		return true;
	return false;
}

bool gameIsPossible(std::vector<std::string> rounds)
{
	std::vector<int>cube(3);
	int i=0;
	while(i < rounds.size())
	{       cube = parseRound(rounds[i]);
		if(!roundIsPossible(cube[0], cube[1], cube[2]))
			return false;
		i++;}
	return true;
}

std::vector <int> parseRound(std::string)
{
	std::vector<int>cubes(3);
	return cubes;
}

int parseGame(std::string s)
{
	int gameNumber;
	std::vector<std::string> rounds;
	int gameEnd = s.find(':');
	std::string gameString = s.substr(0, gameEnd);
	gameNumber = getGameNumber(gameString); 

	if(gameIsPossible(rounds))
	return gameNumber;
	else return 0;
}

int getGameNumber(std::string str)
{
	int gameNumber;

	return gameNumber;
}
