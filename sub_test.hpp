#ifndef SUB_TEST_HPP
#define SUB_TEST_HPP

#include "gtest/gtest.h"
#include "sub.hpp"
#include <string>

using namespace std;

TEST(SubTest, NullArg){
    Base* a = nullptr;
    Base* b = new Op(4.0);
    EXPECT_THROW(Sub(a,b), std::invalid_argument);
    delete b;
}

TEST(SubTest, EvaluatePositive){
    Op* a = new Op(4.0);
    Op* b = new Op(2.0);
    Sub* test = new Sub(a, b);
    EXPECT_EQ(test->evaluate(), 2.0);
    delete a,b,test;
}

TEST(SubTest, EvaluateNegative){
    Op* a = new Op(3.0);
    Op* b = new Op(5.0);
    Sub* test = new Sub(a, b);
    EXPECT_EQ(test->evaluate(), -2.0);
    delete a,b,test;
}

TEST(SubTest, EvaluateZero){
    Op* a = new Op(8.0);
    Op* b = new Op(8.0);
    Sub* test = new Sub(a, b);
    EXPECT_EQ(test->evaluate(), 0.0);
    delete a,b,test;
}

TEST(SubTest, Stringify_One){
    Op* a = new Op(10.0);
    Op* b = new Op(5.0);
    Sub* test = new Sub(a,b);
    EXPECT_EQ("(10.000000-5.000000)", test->stringify());
    delete a,b,test;
}


#endif //SUB_TEST_HPP

