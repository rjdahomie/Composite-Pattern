#ifndef POW_HPP
#define POW_HPP

#include "base.hpp"
#include <stdexcept>
#include <limits>
#include <cmath>

class Pow : public Base {
	private:
        	Base* leftNode;
        	Base* rightNode;

    	public:
      		Pow(Base* left, Base* right) : Base() {
         		if(left == nullptr || right == nullptr){throw std::invalid_argument("Null arg being passed in Pow class.");}
         		if(left->evaluate() < 0 && !( right->evaluate() == floor(right->evaluate()) ) ){throw std::invalid_argument("Imaginary Number.");}
    			leftNode = left;
    			rightNode = right;
		}
      		
		double evaluate(){
    			return pow(leftNode->evaluate(), rightNode->evaluate());
		}

      		std::string stringify() {
    			return "(" + leftNode->stringify() + "**" + rightNode->stringify() + ")";
		}
};
#endif//POW_HPP
