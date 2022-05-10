#ifndef MULT_TEST_HPP
#define MULT_TEST_HPP

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, NullArgA){
  Base *a = nullptr, *b = new Op(1.0);
  EXPECT_THROW(Mult(a, b), std::invalid_argument);
  delete b;
}

TEST(MultTest, NullArgB){
  Base *a = new Op(1), *b = nullptr;
  EXPECT_THROW(Mult(a, b), std::invalid_argument);
  delete a;
}

TEST(MultTest, NullArgC){
  Base *a = nullptr, *b = nullptr;
  EXPECT_THROW(Mult(a, b), std::invalid_argument);
}

TEST(MultTest, Evaluate_ONE){
  Base *a = new Op(1.0);
  Base *b = new Op(1.0);
  Base *c = new Mult(a, b);
  EXPECT_EQ(1.0, c->evaluate());
  delete a, b, c;
}

TEST(MultTest, Evaluate_TWO){
  Base* a = new Op(1.0);
  Base* b = new Op(0.0);
  Base* c = new Mult(a, b);
  EXPECT_EQ(0.0, c->evaluate());
  delete a, b, c;
}

TEST(MultTest, Evaluate_THREE){
  Base* a = new Op(7500.0);
  Base* b = new Op(2.0);
  Base* c = new Mult(a, b);
  EXPECT_EQ(15000.0, c->evaluate());
  delete a, b, c;
}
TEST(MultTest, Stringify_ONE){
  Base* a = new Op(1.0);
  Base* b = new Op(1.0);
  Base* c = new Mult(a, b);
  EXPECT_EQ("(1.000000*1.000000)", c->stringify());
  delete a, b, c;
}

TEST(MultTest, Stringify_TWO){
  Base* a = new Op(78), *b = new Op(54), *c = new Mult(a, b);
  EXPECT_EQ("(78.000000*54.000000)", c->stringify());
  delete a, b, c;
}

#endif//MULT_TEST_HPP
