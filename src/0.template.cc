/**
 * 
 * Copyright (c) 2018 NUAA Jiang Yang
 * 
 * @file
 * @author   Jiang Yang (pokerpoke@qq.com)
 * @date     2018-11
 * @brief    
 * @version  0.0.1
 * 
 * Last Modified:  2019-05-21
 * Modified By:    Jiang Yang (pokerpoke@qq.com)
 * 
 */
#include "headers.h"

class Solution
{
public:
    bool isValid(string s)
    {
        return true;
    }
};

TEST(isValid, isValid_1)
{
    Solution s;
    EXPECT_TRUE(s.isValid(""));
    EXPECT_EQ(s.isValid(""), true);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}