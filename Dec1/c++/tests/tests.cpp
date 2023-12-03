#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "functions.h"

TEST(Dec1Tests, isdigit)
{
	ASSERT_EQ(isDigit('1'), true);
	ASSERT_EQ(isDigit('a'), false);
			
}

TEST(Dec1Tests, findDigits)
{
	ASSERT_EQ(findDigits("1abc2"), 12);
	ASSERT_EQ(findDigits("a1b2c3d4e5f"),15);
	ASSERT_EQ(findDigits("treb7uchet"),77);
	ASSERT_EQ(findDigits("two1nine"),29);
	ASSERT_EQ(findDigits("oneight"),18);
}

TEST(Dec1Tests, findDigitsFromString)
{
	ASSERT_EQ(findDigitsFromString("one"),1);
	ASSERT_EQ(findDigitsFromString("none"),1);
	ASSERT_EQ(findDigitsFromString("twenty"),-1); 

}
