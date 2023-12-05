#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "functions.h"

TEST(Day2Test, getGameNumber)
{
	ASSERT_EQ(getGameNumber("Game 1"),1);
	ASSERT_NE(getGameNumber("Game 2"),1);
		
}

TEST(Day2Test, parseRoundsString)
{
	std::vector<std::string> rounds = parseRoundsString("3 blue, 4 red; 1 red, 2 green, 6 blue; 2 green");

	ASSERT_EQ(rounds[0], "3 blue, 4 red");
	ASSERT_EQ(rounds[1], "1 red, 2 green, 6 blue");
	ASSERT_EQ(rounds[2], "2 green");
}

TEST(Day2Test, parseRound)
{
	std::vector<int> colors = parseRound("3 blue, 4 red");

	ASSERT_EQ(colors[0], 4);
	ASSERT_EQ(colors[1], 0);
	ASSERT_EQ(colors[2], 3);
}

TEST(Day2Test, parseGame)
{
	ASSERT_EQ(parseGame("Game 1: 3 blue, 4 red; 1 red, 2 green, 6 blue; 2 green"), 1);
	ASSERT_EQ(parseGame("Game 3: 8 green, 6 blue, 20 red; 5 blue, 4 red, 13 green; 5 green, 1 red"),0);

} 
