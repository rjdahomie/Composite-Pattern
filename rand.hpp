#ifndef __RAND_HPP__
#define __RAND_HPP__

#include <iostream>
#include <string>
#include <cstdlib>
#include "base.hpp"

class Rand : public Base {
    public:
        Rand() : Base() { number = rand() % 100; }
        virtual double evaluate() { return number; }
        virtual std::string stringify() {return to_string(number);}
        double getValue(){return number;}
        void setVal (double v){number = v;}
    private:
        double number = 0.0;
};

#endif
