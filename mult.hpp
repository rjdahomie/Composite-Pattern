#ifndef MULT_HPP
#define MULT_HPP

#include "base.hpp"
#include "op.hpp"
#include <stdexcept>

class Mult : public Base {
	private:
		Base* leftNode;
		Base* rightNode;
	public:
		Mult(Base* left, Base* right) : Base() {
			this->leftNode = left;
			this->rightNode = right;
		}
		/*
		~Mult(){
			delete leftNode, rightNode;
		} 
		*/		

		double evaluate() {
			return leftNode->evaluate() * rightNode->evaluate();
		}
		
		std::string stringify(){
			return "(" + this->leftNode->stringify() + "*" + this->rightNode->stringify() + ")";
		}
};

#endif
