#ifndef SUB_HPP
#define SUB_HPP

#include "base.hpp"
#include <stdexcept>

class Sub : public Base {
	private:
		Base* leftNode;
		Base* rightNode;
	public:
		Sub(Base* left, Base* right) : Base() {
			leftNode = left;
			rightNode = right;
		}
	/*
	~Sub(){
		delete leftNode, rightNode;
	}
	*/
	
	double evaluate(){
		return leftNode->evaluate() - rightNode->evaluate();
	}

	std::string stringify(){
		return "(" + leftNode->stringify() + "-" + rightNode->stringify() + ")";
	}
};

#endif
