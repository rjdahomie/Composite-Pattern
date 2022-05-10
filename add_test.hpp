#ifndef ADD_TEST_HPP
#define ADD_TEST_HPP

#include "gtest/gtest.h"

#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"

TEST(AddTest, AddEvalPosInt){
        Op* val1 = new Op(8.0);
    Op* val2 = new Op(10.0);
    Add* test = new Add(val1, val2);
        EXPECT_EQ(18.0, test->evaluate());
}
TEST(AddTest, AddStringifyPosInt){
        Op* val1 = new Op(8.0);
        Op* val2 = new Op(10.0);
        Add* test = new Add(val1, val2);
        EXPECT_EQ("(8.000 + 10.000)", test->stringify());
}
TEST(AddTest, AddEvalNegInt){
        Op* val1 = new Op(-8.0);
        Op* val2 = new Op(-10.0);
        Add* test = new Add(val1, val2);
        EXPECT_EQ(-18.0, test->evaluate());
}
TEST(AddTest, AddStringifyNegInt){
        Op* val1 = new Op(-8.0);
        Op* val2 = new Op(-10.0);
        Add* test = new Add(val1, val2);
        EXPECT_EQ("(-8.000 + -10.000)", test->stringify());
}
TEST(AddTest, AddEvalZero){
        Op* val1 = new Op(0.0);
        Op* val2 = new Op(0.0);
        Add* test = new Add(val1, val2);
        EXPECT_EQ(0.0, test->evaluate());
}
TEST(AddTest, AddEvalAddAgain){
        Op* val1 = new Op(8.0);
        Op* val2 = new Op(10.0);
    Add* result = new Add(val1, val2);
        Add* test = new Add(result, val2);
        EXPECT_EQ(28.0, test->evaluate());
}
TEST(AddTest, AddStringifyAddAgain){
        Op* val1 = new Op(8.0);
        Op* val2 = new Op(10.0);
        Add* result = new Add(val1, val2);
        Add* test = new Add(result, val2);
        EXPECT_EQ("((8.000 + 10.000) + 10.000)", test->stringify());
}
TEST(AddTest, AddEvalAddSub){
        Op* val1 = new Op(18.0);
        Op* val2 = new Op(10.0);
    Op* kobe = new Op(8.0);
    Sub* result = new Sub(val1, val2);
        Add* test = new Add(result, kobe);
        EXPECT_EQ(16.0, test->evaluate());
}
TEST(AddTest, AddStringAddSub){
        Op* val1 = new Op(18.0);
        Op* val2 = new Op(10.0);
        Op* kobe = new Op(8.0);
        Sub* result = new Sub(val1, val2);
        Add* test = new Add(result, kobe);
        EXPECT_EQ("((18.000 - 10.000)+ 8.000)", test->stringify());
}
TEST(AddTest, AddEvalAddSub){
        Op* val1 = new Op(18.0);
        Op* val2 = new Op(10.0);
        Op* kobe = new Op(8.0);
        Sub* result = new Sub(val1, val2);
        Add* test = new Add(result, kobe);
        EXPECT_EQ(16.0, test->evaluate());
}
TEST(AddTest, AddEvalAddMult){
        Op* val1 = new Op(2.0);
        Op* val2 = new Op(3.0);
        Op* kobe = new Op(8.0);
        Mult* result = new Mult(val1, val2);
        Add* test = new Add(result, kobe);
        EXPECT_EQ(14.0, test->evaluate());
}
TEST(AddTest, AddStringAddMult){
        Op* val1 = new Op(2.0);
        Op* val2 = new Op(3.0);
        Op* kobe = new Op(8.0);
        Mult* result = new Mult(val1, val2);
        Add* test = new Add(result, kobe);
        EXPECT_EQ("((2.000 * 3.000) + 6.000)", test->Stringify());
}
TEST(AddTest, AddEvalAddDiv){
        Op* val1 = new Op(8.0);
        Op* val2 = new Op(2.0);
        Op* kobe = new Op(24.0);
        Div* result = new Div(val1, val2);
        Add* test = new Add(result, kobe);
        EXPECT_EQ(28.0, test->evaluate());
}
TEST(AddTest, AddStringAddMult){
        Op* val1 = new Op(8.0);
        Op* val2 = new Op(2.0);
        Op* kobe = new Op(24.0);
        Div* result = new Div(val1, val2);
        Add* test = new Add(result, kobe);
        EXPECT_EQ("((8.000 / 2.000) + 24.000)", test->stringify());
}

#endif//ADD_TEST_HPP
