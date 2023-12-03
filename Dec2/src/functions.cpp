#include <vector>
#include <string>

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
	{       cube = parseRound(round[i]);
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
