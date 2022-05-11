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
	delete val1;
	delete val2;
	delete test;
}
TEST(AddTest, AddStringifyPosInt){
        Op* val1 = new Op(8.0);
        Op* val2 = new Op(10.0);
        Add* test = new Add(val1, val2);
        EXPECT_EQ("(8.000000+10.000000)", test->stringify());
	delete val1;
	delete val2;
	delete test;
}
TEST(AddTest, AddEvalNegInt){
        Op* val1 = new Op(-8.0);
        Op* val2 = new Op(-10.0);
        Add* test = new Add(val1, val2);
        EXPECT_EQ(-18.0, test->evaluate());
	delete val1;
        delete val2;
        delete test;
}
TEST(AddTest, AddStringifyNegInt){
        Op* val1 = new Op(-8.0);
        Op* val2 = new Op(-10.0);
        Add* test = new Add(val1, val2);
        EXPECT_EQ("(-8.000000+-10.000000)", test->stringify());
	delete val1;
        delete val2;
        delete test;
}
TEST(AddTest, AddEvalZero){
        Op* val1 = new Op(0.0);
        Op* val2 = new Op(0.0);
        Add* test = new Add(val1, val2);
        EXPECT_EQ(0.0, test->evaluate());
	delete val1;
        delete val2;
        delete test;
}
TEST(AddTest, AddEvalAddAgain){
        Op* val1 = new Op(8.0);
        Op* val2 = new Op(10.0);
    	Add* result = new Add(val1, val2);
        Add* test = new Add(result, val2);
        EXPECT_EQ(28.0, test->evaluate());
	delete val1;
        delete val2;
        delete test;
	delete result;
}
TEST(AddTest, AddStringifyAddAgain){
        Op* val1 = new Op(8.0);
        Op* val2 = new Op(10.0);
        Add* result = new Add(val1, val2);
        Add* test = new Add(result, val2);
        EXPECT_EQ("((8.000000+10.000000)+10.000000)", test->stringify());
	delete val1;
        delete val2;
        delete test;
	delete result;
}
TEST(AddTest, AddEvalAddSub_1){
        Op* val1 = new Op(18.0);
        Op* val2 = new Op(10.0);
   	Op* val3 = new Op(8.0);
    	Sub* result = new Sub(val1, val2);
        Add* test = new Add(result, val3);
        EXPECT_EQ(16.0, test->evaluate());
	delete val1;
        delete val2;
	delete val3;
        delete test;
	delete result;
}
TEST(AddTest, AddStringAddSub){
        Op* val1 = new Op(18.0);
        Op* val2 = new Op(10.0);
        Op* val3 = new Op(8.0);
        Sub* result = new Sub(val1, val2);
        Add* test = new Add(result, val3);
        EXPECT_EQ("((18.000000-10.000000)+8.000000)", test->stringify());
	delete val1;
        delete val2;
	delete val3;
        delete test;
	delete result;
}
TEST(AddTest, AddEvalAddSub_2){
        Op* val1 = new Op(18.0);
        Op* val2 = new Op(10.0);
        Op* val3 = new Op(8.0);
        Sub* result = new Sub(val1, val2);
        Add* test = new Add(result, val3);
        EXPECT_EQ(16.0, test->evaluate());
	delete val1;
        delete val2;
	delete val3;
        delete test;
	delete result;
}
TEST(AddTest, AddEvalAddMult){
        Op* val1 = new Op(2.0);
        Op* val2 = new Op(3.0);
        Op* val3 = new Op(8.0);
        Mult* result = new Mult(val1, val2);
        Add* test = new Add(result, val3);
        EXPECT_EQ(14.0, test->evaluate());
	delete val1;
        delete val2;
        delete val3;
        delete test;
        delete result;
}
TEST(AddTest, AddStringAddMult_1){
        Op* val1 = new Op(2.0);
        Op* val2 = new Op(3.0);
        Op* val3 = new Op(8.0);
        Mult* result = new Mult(val1, val2);
        Add* test = new Add(result, val3);
        EXPECT_EQ("((2.000000*3.000000)+8.000000)", test->stringify());
	delete val1;
        delete val2;
        delete val3;
        delete test;
        delete result;
}
TEST(AddTest, AddEvalAddDiv){
        Op* val1 = new Op(8.0);
        Op* val2 = new Op(2.0);
        Op* val3 = new Op(24.0);
        Div* result = new Div(val1, val2);
        Add* test = new Add(result, val3);
        EXPECT_EQ(28.0, test->evaluate());
	delete val1;
        delete val2;
        delete val3;
        delete test;
        delete result;
}
TEST(AddTest, AddStringAddMult_2){
        Op* val1 = new Op(8.0);
        Op* val2 = new Op(2.0);
        Op* val3 = new Op(24.0);
        Div* result = new Div(val1, val2);
        Add* test = new Add(result, val3);
        EXPECT_EQ("((8.000000/2.000000)+24.000000)", test->stringify());
	delete val1;
        delete val2;
        delete val3;
        delete test;
        delete result;
}

#endif//ADD_TEST_HPP
