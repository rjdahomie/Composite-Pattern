#ifndef __OP_HPP__
#define __OP_HPP__

#include <iostream>
#include <sstream>
#include <cstdlib>
#include "base.hpp"

using namespace std;

class Op : public Base {
    public:
        Op(double value) : Base() { number = value; }
        virtual double evaluate() { return number; }
        virtual std::string stringify() { 
		stringstream num;
		num << number;
		string s;
		num << s;
		return s;
	 }
	private:
	    double number;
};

class Rand : public Base {
    public:
        Op(double value) : Base() { number = rand() % 100; }
        virtual double evaluate() { return number; }
        virtual std::string stringify() {
                stringstream num;
                num << number;
                string s;
                num << s;
                return s;
         }
        private:
            double number;
};



#endif //__OP_HPP__
