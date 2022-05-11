#ifndef DIV_TEST_HPP
#define DIV_TEST_HPP

#include "gtest/gtest.h"
#include "div.hpp"
#include <string>

using namespace std;

TEST(DivTest, EvaluatePositive){
    Op* a = new Op(4.0);
    Op* b = new Op(2.0);
    Div* test = new Div(a, b);
    EXPECT_EQ(test->evaluate(), 2.0);
    delete a;
    delete b;
    delete test;
}

TEST(DivTest, EvaluateNegative){
    Op* a = new Op(4.0);
    Op* b = new Op(-2.0);
    Div* test = new Div(a, b);
    EXPECT_EQ(test->evaluate(), -2.0);
    delete a;
    delete b;
    delete test;
}

TEST(DivTest, EvaluateZero){
    Op* a = new Op(0.0);
    Op* b = new Op(4.0);
    Div* test = new Div(a, b);
    EXPECT_EQ(test->evaluate(), 0.0);
    delete a;
    delete b;
    delete test;
}

TEST(DivTest, Stringify_One){
    Op* a = new Op(10.0);
    Op* b = new Op(5.0);
    Div* test = new Div(a,b);
    EXPECT_EQ("(10.000000/5.000000)", test->stringify());
    delete a;
    delete b;
    delete test;
}




#endif //DIV_TEST_HPP
