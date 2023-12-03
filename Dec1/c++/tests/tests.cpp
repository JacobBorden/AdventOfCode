#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "functions.h"

TEST(MainTests, isdigit)
{
	ASSERT_EQ(isDigit('1'), true);
	ASSERT_EQ(isDigit('a'), false);
			
}

TEST(MainTests, findDigits)
{
	ASSERT_EQ(findDigits("1abc2"), 12);
	ASSERT_EQ(findDigits("a1b2c3d4e5f"),15);
	ASSERT_EQ(findDigits("treb7uchet"),77); 
}
