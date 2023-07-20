#include "MutantStack.hpp"
#include <vector>

int	main(void)
{
	MutantStack<int> mstack;
	std::vector<int> vec;

	
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	MutantStack<int>::const_iterator it2 = mstack.begin();
	MutantStack<int>::const_iterator ite2 = mstack.end();

	MutantStack<int>::reverse_iterator it3 = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite3 = mstack.rend();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "m: " << *it << std::endl;
		++it;
	}

	std::cout << std::endl;

	while (it2 != ite2)
	{
		std::cout << "m: " << *it2 << std::endl;
		++it2;
	}

	std::cout << std::endl;

	while (it3 != ite3)
	{
		std::cout << "m: " << *it3 << std::endl;
		++it3;
	}

	std::stack<int> s(mstack);

	std::cout << std::endl;

	vec.push_back(5);
	vec.push_back(17);
	std::cout << "top: " << vec.back() << std::endl;
	vec.pop_back();
	std::cout << "size: " << vec.size() << std::endl;
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(737);
	vec.push_back(0);

	std::vector<int>::iterator it1 = vec.begin();
	std::vector<int>::iterator ite1 = vec.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << "m: " << *it1 << std::endl;
		++it1;
	}
	return (0);
}