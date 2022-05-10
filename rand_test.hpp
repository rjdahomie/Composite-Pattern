#ifndef __RAND__TEST_HPP__
#define __RAND__TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "rand.hpp"
#include <string>
#include <stdlib.h>

TEST(RandTest, RandEvauateValEightyThree){
    srand(1);
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), 83);
    delete test;
}

TEST(RandTest, RandStringValEightyThree){
    srand(1);
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), "83.000000");
    delete test;
}


#endif
