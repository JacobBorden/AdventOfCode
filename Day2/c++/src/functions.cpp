#include <vector>
#include <string>
#include "functions.h"

Game::Game(std::string str)
{
	parseGame(str);
}

bool Game::isPossible()
{
	return _isPossible;
}

int Game::gameNumber()
{
	return _gameNumber;
}

int Game::getPower()
{
	return _redMax * _greenMax * _blueMax;
}

bool Game::roundIsPossible(int red, int green, int blue)
{
	if(red <= REDMAX && green <=GREENMAX && blue <= BLUEMAX)
		return true;
	return false;
}

bool Game::gameIsPossible(std::vector<std::string> rounds)
{
	std::vector<int>cube(3);
	int i=0;
	while(i < rounds.size())
	{       cube = parseRound(rounds[i]);
		if(!roundIsPossible(cube[0], cube[1], cube[2]))
			_isPossible = false;
		i++;}
	return _isPossible;
}

std::vector <int> Game::parseRound(std::string str)
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
		{
			red = value;
			if(red > _redMax)
				_redMax = red;
		}
		else if (colorName == "green")
		{
			green = value;
			if(green > _greenMax)
				_greenMax = green;
		}

		else if (colorName == "blue")
		{
			blue = value;
			if(blue > _blueMax)
				_blueMax = blue;
		}

	}

	std::vector<int>cubes(3);
	cubes[0] = red;
	cubes[1] = green;
	cubes[2] = blue;

	return cubes;
}

void Game::parseGame(std::string s)
{
	int gameNumber;

	int gameEnd = s.find(':');
	std::string gameString = s.substr(0, gameEnd);
	_gameNumber = getGameNumber(gameString);
	std::string roundsString = s.substr(gameEnd+2);
	std::vector<std::string> rounds = parseRoundsString(roundsString);

	if(gameIsPossible(rounds))
		_isPossible = true;
	else _isPossible = false;
}


std::vector<std::string> Game::parseRoundsString(std::string roundsString)
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

int Game::getGameNumber(std::string str)
{
	int gameNumber = std::stoi(str.substr(5,str.length()-5));

	return gameNumber;
}
