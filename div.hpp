#ifndef DIV_HPP
#define DIV_HPP

#include "base.hpp"
#include "op.hpp"
#include <stdexcept>

class Div : public Base {
	private:
		Base* leftNode;
		Base* rightNode;
	public:
		Div(Base* left, Base* right) : Base() {
			if(left == nullptr || right == nullptr){
				throw std::invalid_argument("Null arg passed thru Div class.");
			}
			leftNode = left;
			rightNode = right;
		}
		
		double evaluate() {
			return leftNode->evaluate() / rightNode->evaluate();
		}

		std::string stringify(){
			return "(" + leftNode->stringify() + "/" + rightNode->stringify() + ")";
		}

};

#endif
