#include "Span.hpp"
#include <list>

int	main(void)
{
	Span 			sp = Span(5);
	Span 			sp2 = Span(10);
	std::list<int>	lst;
	int				arr[] = {3, 15 , 48, -9};

	add(lst, arr, sizeof(arr) / sizeof(int));
	try
	{
		sp.addNumber(1);
		sp.addNumber(15);
		sp.addNumber(6);
		sp.addNumber(17);
		sp.addNumber(-9);
		sp.addNumber(-11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try
	{
		sp2.addMultiple(lst);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}