#ifndef MSTACK_H
#define MSTACK_H

#include <iostream>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(): std::stack<T>() {return;}
		MutantStack(const std::stack<T> &stack) : std::stack<T>(stack) {}
	
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return std::stack<T>::c.begin(); }
    	iterator end() { return std::stack<T>::c.end(); }
};



#endif