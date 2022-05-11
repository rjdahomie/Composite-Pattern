#ifndef OP_TEST_HPP
#define OP_TEST_HPP

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
    delete test;
}
TEST(OpTest, OpEvaluateNegative) {
    Op* test = new Op(-8);
    EXPECT_EQ(test->evaluate(), -8);
    delete test;
}
TEST(OpTest, OpStringNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->stringify(), "8.000000");
    delete test;
}
TEST(OpTest, OpStringNegative) {
    Op* test = new Op(-8);
    EXPECT_EQ(test->stringify(), "-8.000000");
    delete test;
}

#endif //OP_TEST_HPP
