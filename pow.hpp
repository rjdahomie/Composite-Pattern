#ifndef POW_HPP
#define POW_HPP

#include "base.hpp"
#include <stdexcept>
#include <limits>
#include <cmath>
#include <math.h>

class Pow : public Base {
	private:
        	Base* leftNode;
        	Base* rightNode;

    	public:
      		Pow(Base* left, Base* right) : Base() {
    			leftNode = left;
    			rightNode = right;
		}
		/*
		~Pow(){
			delete leftNode, rightNode;
		}
		*/
      		
		double evaluate(){
    			return pow(leftNode->evaluate(), rightNode->evaluate());
		}

      		std::string stringify() {
    			return "(" + leftNode->stringify() + "**" + rightNode->stringify() + ")";
		}
};
#endif//POW_HPP
