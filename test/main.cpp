#include <my/vector.h>
#include <iostream>
#include <gtest/gtest.h>
#include "test.h"
#include <vector>

/*
TEST(vector, abcd)
{
     vector<int> a;

    vector<int> b;
    for (int i = 0; i < 6; i++)
    {
        b.push_back(i);
    }

    vector<int> c;
    for (int i = 0; i < 2; i++)
    {
        c.push_back(i);
    }
    for (int i = 3; i < 6; i++)
    {
        c.push_back(i);
    }



    EXPECT_EQ(a.size(), 0u);
    EXPECT_EQ(b.size(), 6u);
    EXPECT_EQ(a.empty(), true);
    EXPECT_EQ(b.empty(), false);



vector<int> a;



    vector<int> c;
    for (int i = 0; i < 2; i++)
    {
        c.push_back(i);
    }
    for (int i = 3; i < 6; i++)
    {
        c.push_back(i);
    }

}

*/

TEST(vector, efgh)
{


    std::vector<int> a = {1, 2, 3, 4, 5, 6};
    vector<int> b;

    for (int i = 1; i < 7; i++)
    {
        b.push_back(i);
    }


    b.erase(b.begin() + 2, b.begin() + 3);

    std::vector<int> c (b.begin(), b.end());

    a.erase(a.begin() + 3, a.begin() + 3);

    EXPECT_EQ(a, c);

    EXPECT_EQ(a.erase(a.begin() + 2, a.begin() + 4) - a.begin(),  b.erase(b.begin() + 2, b.begin() + 4) - b.begin());


}


int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();



}