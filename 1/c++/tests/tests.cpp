#include <gtest/gtest.h>
#include "main.h"

TEST(MainTests, isdigit)
{
	ASSERT_EQ(isDigit('1'), true);
	ASSERT_EQ(isDigit('a'), false);
			
}

