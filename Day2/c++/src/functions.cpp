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

std::vector <int> parseRound(std::string str)
{
	std::vector<std::string> color;
	while(str.find(',') != std::string::npos)
	{
		int colorEnd = str.find(',');
		color.push_back(str.substr(0,colorEnd));
		str=str.substr(colorEnd+2);
		
	}
	if(!str.empty())
		color.push_back(str);
	
	int red=0;
	int green=0;
	int blue=0;

	for(int i=0; i< color.size(); i++)
	{
		int nameStart = color[i].find(' ');
		int value = std::stoi(color[i].substr(0,nameStart));
		std::string colorName = color[i].substr(nameStart+1);
		
		if (colorName == "red")
			red = value;
		else if (colorName == "green")
			green = value;
		else if (colorName == "blue")
			blue = value;

	}

	std::vector<int>cubes(3);
	cubes[0] = red;
	cubes[1] = green;
	cubes[2] = blue;
	
	return cubes;
}

int parseGame(std::string s)
{
	int gameNumber;

	int gameEnd = s.find(':');
	std::string gameString = s.substr(0, gameEnd);
	gameNumber = getGameNumber(gameString);
	std::string roundsString = s.substr(gameEnd+2);
	std::vector<std::string> rounds = parseRoundsString(roundsString);

	if(gameIsPossible(rounds))
		return gameNumber;
	else return 0;
}


std::vector<std::string> parseRoundsString(std::string roundsString)
{

	std::vector<std::string> rounds;
	
	while(roundsString.find(';') != std::string::npos )
	{
		int roundEnd = roundsString.find(';');
		rounds.push_back(roundsString.substr(0,roundEnd));
		roundsString = roundsString.substr(roundEnd+2);

	}
	if(!roundsString.empty())
		rounds.push_back(roundsString);

	return rounds;
}

int getGameNumber(std::string str)
{
	int gameNumber = std::stoi(str.substr(5,str.length()-5));

	return gameNumber;
}
