#ifndef __OP_HPP__
#define __OP_HPP__

#include <string>
#include "base.hpp"

using namespace std;

class Op : public Base {
    public:
        Op(double value) : Base() { number = value; }
        virtual double evaluate() { return number; }
        virtual std::string stringify() { return std::to_string(myVal); }
    private:
	Base* leftNode = NULL;
	Base* rightNode = NULL;
	double number;
};

class Rand : public Base {
    public:
        Rand(double value) : Base() { number = rand() % 100; }
        virtual double evaluate() { return number; }
        virtual std::string stringify() { return std::to_string(number); }
    private:
	Base* leftNode = NULL;
	Base* rightNode = NULL;
	double number;
};



#endif //__OP_HPP__
