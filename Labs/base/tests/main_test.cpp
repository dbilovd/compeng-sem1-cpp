# include "gtest/gtest.h"


int number (int n)
{
    return n;
}


TEST(AnotherMainTest, CheckTrue) {
    // EXPECT_TRUE(1 == number(1));
}


int main (int argc, char** argv) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}