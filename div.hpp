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
			leftNode = left;
			rightNode = right;
		}
		/*
		~Div(){
			delete leftNode, rightNode;
		}
		*/
		double evaluate() {
			return leftNode->evaluate() / rightNode->evaluate();
		}

		std::string stringify(){
			return "(" + leftNode->stringify() + "/" + rightNode->stringify() + ")";
		}

};

#endif
