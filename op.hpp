#ifndef __OP_HPP__
#define __OP_HPP__

#include <string>
#include "base.hpp"

using namespace std;

class Op : public Base {
    public:
        Op(double value) : Base() { number = value; }
        virtual double evaluate() { return number; }
        virtual std::string stringify(){return std::to_string(number);}
        double getValue(){return number;}
        void setVal(double v){number = v;}
    private:
	double number = 0;
	Base* leftNode = NULL;
	Base* rightNode = NULL;
};

#endif //__OP_HPP__
