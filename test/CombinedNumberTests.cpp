#include <gtest/gtest.h>
#include "CombinedNumber.hpp"
#include <list>
struct CombinedNumberTests : public ::testing::Test
{
};


TEST_F(CombinedNumberTests, whenEmptyListisGivenEmptyStringShouldBeReturned)
{
    std::list<unsigned int> l = {};
    CombinedNumber cn;
    auto result = cn.constructGreatestNumber(l);
    ASSERT_EQ(result,"");
}

TEST_F(CombinedNumberTests, whenisGivenStringIsReturned)
{
    std::list<unsigned int> l = {};
    CombinedNumber cn;
    auto result = cn.constructGreatestNumber({1});
    ASSERT_EQ(result,"1");
}
