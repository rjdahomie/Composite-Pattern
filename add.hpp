#ifndef ADD_HPP
#define ADD_HPP

#include "base.hpp"
#include "op.hpp"

class Add : public Base {
	private:
		Base* leftNode;
		Base* rightNode;

	public:
		Add(Base* left, Base* right) : leftNode(left), rightNode(right), Base() {}
      		/*
		~Add(){
			delete leftNode;
			delete rightNode;
		}
		*/

		double evaluate() {
    			return leftNode->evaluate() + rightNode->evaluate();
		}
      		
		std::string stringify(){
    			return "(" + leftNode->stringify() + "+" + rightNode ->stringify() + ")";
		}

};

#endif //ADD_HPP
