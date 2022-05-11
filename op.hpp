#ifndef __OP_HPP__
#define __OP_HPP__

#include <string>
#include "base.hpp"

using namespace std;

class Op : public Base {
    private:
	double number=0;
    public:
        Op(double value) : number(value), Base() { }
        virtual double evaluate() { return number; }
        virtual std::string stringify(){return std::to_string(number);}
};



#endif //__OP_HPP__
