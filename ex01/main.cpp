#include "Span.hpp"

int	main(void)
{
	Span sp = Span(4);

	try
	{
		sp.addNumber(1);
		sp.addNumber(15);
		sp.addNumber(6);
		sp.addNumber(17);
		sp.addNumber(-9);
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
	
	
	
}