#ifndef SUB_TEST_HPP
#define SUB_TEST_HPP

#include "gtest/gtest.h"
#include "sub.hpp"
#include <string>

using namespace std;

TEST(SubTest, EvaluatePositive){
    Op* a = new Op(4.0);
    Op* b = new Op(2.0);
    Sub* test = new Sub(a, b);
    EXPECT_EQ(test->evaluate(), 2.0);
    delete a;
    delete b;
    delete test;
}

TEST(SubTest, EvaluateNegative){
    Op* a = new Op(3.0);
    Op* b = new Op(5.0);
    Sub* test = new Sub(a, b);
    EXPECT_EQ(test->evaluate(), -2.0);
    delete a;
    delete b;
    delete test;
}

TEST(SubTest, EvaluateZero){
    Op* a = new Op(8.0);
    Op* b = new Op(8.0);
    Sub* test = new Sub(a, b);
    EXPECT_EQ(test->evaluate(), 0.0);
    delete a;
    delete b;
    delete test;
}

TEST(SubTest, Stringify_One){
    Op* a = new Op(10.0);
    Op* b = new Op(5.0);
    Sub* test = new Sub(a,b);
    EXPECT_EQ("(10.000000-5.000000)", test->stringify());
    delete a;
    delete b;
    delete test;
}


#endif //SUB_TEST_HPP

