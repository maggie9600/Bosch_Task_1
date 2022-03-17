#include "math.cpp"
#include <gtest/gtest.h>
 
TEST(SumTest, PositiveNos) { 
    Calculator c;
    ASSERT_DOUBLE_EQ(7, c.sum(3,4));
    ASSERT_DOUBLE_EQ(6461008, c.sum(5764687,696321));
}
 
TEST(SumTest, NegativeNos) {
    Calculator c;
    ASSERT_DOUBLE_EQ(-1, c.sum(-4,3));
    ASSERT_DOUBLE_EQ(-2796703, c.sum(5126792,-7923495));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}