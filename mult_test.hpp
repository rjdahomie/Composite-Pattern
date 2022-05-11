#ifndef MULT_TEST_HPP
#define MULT_TEST_HPP

#include "gtest/gtest.h"
#include "mult.hpp"

TEST(MultTest, Evaluate_ONE){
  Base *a = new Op(1.0);
  Base *b = new Op(1.0);
  Base *c = new Mult(a, b);
  EXPECT_EQ(1.0, c->evaluate());
  delete a;
  delete b;
  delete c;
}

TEST(MultTest, Evaluate_TWO){
  Base* a = new Op(1.0);
  Base* b = new Op(0.0);
  Base* c = new Mult(a, b);
  EXPECT_EQ(0.0, c->evaluate());
  delete a;
  delete b;
  delete c;
}

TEST(MultTest, Evaluate_THREE){
  Base* a = new Op(7500.0);
  Base* b = new Op(2.0);
  Base* c = new Mult(a, b);
  EXPECT_EQ(15000.0, c->evaluate());
  delete a;
  delete b;
  delete c;
}
TEST(MultTest, Stringify_ONE){
  Base* a = new Op(1.0);
  Base* b = new Op(1.0);
  Base* c = new Mult(a, b);
  EXPECT_EQ("(1.000000*1.000000)", c->stringify());
  delete a;
  delete b;
  delete c;
}

TEST(MultTest, Stringify_TWO){
  Base* a = new Op(78), *b = new Op(54), *c = new Mult(a, b);
  EXPECT_EQ("(78.000000*54.000000)", c->stringify());
  delete a;
  delete b;
  delete c;
}


#endif//MULT_TEST_HPP
