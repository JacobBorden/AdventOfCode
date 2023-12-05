#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

#define REDMAX 12
#define GREENMAX 13
#define BLUEMAX 14

#include <vector>
#include <string>

class Game
{
public:
Game(std::string);
bool isPossible();
int gameNumber();
int getPower();

private:
bool roundIsPossible(int red, int green, int blue);
bool gameIsPossible(std::vector<std::string> rounds);
std::vector <int> parseRound(std::string str);
void parseGame(std::string str);
int getGameNumber(std::string str);
std::vector<std::string> parseRoundsString(std::string roundString);
bool _isPossible = true;
int _gameNumber;
int _redMax = 0;
int _greenMax = 0;
int _blueMax = 0;
};

#endif
