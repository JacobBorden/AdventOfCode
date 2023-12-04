#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

#define REDMAX 12
#define GREENMAX 13
#define BLUEMAX 14

#include<vector>
#include<string>

bool roundIsPossible(int red, int green, int blue);
bool gameIsPossible(std::vector<std::string> rounds);
std::vector <int> parseRound(std::string str);
int parseGame(std::string str);
int getGameNumber(std::string str);


#endif
