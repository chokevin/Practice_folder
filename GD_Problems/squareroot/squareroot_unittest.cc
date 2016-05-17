#include "gtest/gtest.h"
#include <iostream>

double squareroot( double x );

TEST(SquareRootTest, Positive){
    EXPECT_EQ( 18.0, squareroot( 324.0));
    EXPECT_EQ( 5, squareroot(25.0));
    EXPECT_EQ( 10, squareroot( 100.0));
}

TEST(SquareRootTest, ZeroAndNegativeNos){
    ASSERT_EQ(0.0, squareroot(0.0));
    ASSERT_EQ(-1, squareroot(-2));
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
