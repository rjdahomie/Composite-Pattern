#ifndef POW_TEST_HPP
#define POW_TEST_HPP

#include "base.hpp"

#include "pow.hpp"

TEST(PowTest, TEST_ONE){
    Base *a = new Op(1),*b = new Op(1), *c = new Pow(a, b);
    EXPECT_EQ(1.0, c->evaluate());
    delete a;
    delete b;
    delete c;
}

TEST(PowTest, TEST_THREE){
    Base *a = new Op(-1), *b = new Op(4), *c = new Pow(a, b);
    EXPECT_EQ(1.0, c->evaluate());
    delete a;
    delete b;
    delete c;
}
TEST(PowTest, TEST_FOUR){
    Base *a = new Op(-4), *b = new Op(-2), *c = new Pow(a, b);
    double check = pow(-4, -2);
    EXPECT_EQ(check, c->evaluate());
    delete a;
    delete b;
    delete c;
}

TEST(PowTest, OperatorTEST_ONE){
    Base *a = new Op(5), *b = new Op(4), *c = new Op(2);
    Base *left = new Div(a, b), *test = new Pow(left, c);
    double check = (5/4.0)*(5/4.0);
    EXPECT_EQ(check, test->evaluate());
    delete a;
    delete b;
    delete c;
    delete test;
    delete left;
}

TEST(PowTest, OperatorTEST_TWO){
    Base *a = new Op(100), *b = new Op(3), *c = new Op(1), *d = new Op(-1);
    Base *left = new Div(a, b), *right = new Mult(c, d), *test = new Pow(left, right);
    double check = (3.0/100);
    EXPECT_EQ(check, test->evaluate());
    delete a;
    delete b;
    delete c;
    delete d;
    delete test;
    delete left;
    delete right;
}

TEST(PowTest, OperatorTEST_THREE){
    Base *a = new Op(5),*b = new Op(1), *c = new Op(2);
    Base *right = new Div(b, c), *test = new Pow(a, right);
    double check = pow(5, .5);
    EXPECT_EQ(check, test->evaluate());
    delete a;
    delete b;
    delete c;
    delete test;
    delete right;
}

TEST(PowTest, stringify_ONE){
    Base *a = new Op(1);
    Base *b = new Op(1);
    Base *c = new Pow(a,b);
    EXPECT_EQ("(1.000000**1.000000)", c->stringify());
    delete a;
    delete b;
    delete c;
}

TEST(PowTest, stringify_TWO){
    Base *a = new Op(78),*b = new Op(54), *c = new Pow(a, b);
    EXPECT_EQ("(78.000000**54.000000)", c->stringify());
    delete a;
    delete b;
    delete c;
}

TEST(PowTest, stringify_THREE){
    Base *a = new Op(1),*b = new Mult(a, a), *c = new Pow(b, a);
    EXPECT_EQ("((1.000000*1.000000)**1.000000)", c->stringify());
    delete a;
    delete b;
    delete c;
}
#endif
