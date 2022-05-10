#ifndef MULT_HPP
#define MULT_HPP

#include "base.hpp"
#include <stdexcept>

class Mult : public Base {
	private:
		Base* leftNode;
		Base* rightNode;
	public:
		Mult(Base* left, Base* right) : Base() {
			if(left == nullptr || right == nullptr){
				throw std::invalid_argument("Null arg passed thru Mult class.");
			}
			leftNode = left;
			rightNode = right;
		}
		
		double evaluate() {
			return leftNode->evaluate() * rightNode->evaluate();
		}
		
		std::string stringify(){
			return "(" + leftNode->stringify() + "*" + rightNode->stringify() + ")";
		}
};

#endif
