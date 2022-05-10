#ifndef DIV_TEST_HPP
#define DIV_TEST_HPP

#include "gtest/gtest.h"
#include "div.hpp"
#include <string>

using namespace std;

TEST(DivTest, NullArg){
    Base* a = nullptr;
    Base* b = new Op(4.0);
    EXPECT_THROW(Div(a,b), std::invalid_argument);
    delete b;
}

TEST(DivTest, EvaluatePositive){
    Op* a = new Op(4.0);
    Op* b = new Op(2.0);
    Div* test = new Div(a, b);
    EXPECT_EQ(test->evaluate(), 2.0);
    delete a,b,test;
}

TEST(DivTest, EvaluateNegative){
    Op* a = new Op(4.0);
    Op* b = new Op(-2.0);
    Div* test = new Div(a, b);
    EXPECT_EQ(test->evaluate(), -2.0);
    delete a,b,test;
}

TEST(DivTest, EvaluateZero){
    Op* a = new Op(0.0);
    Op* b = new Op(4.0);
    Div* test = new Div(a, b);
    EXPECT_EQ(test->evaluate(), 0.0);
    delete a,b,test;
}



#endif //DIV_TEST_HPP
