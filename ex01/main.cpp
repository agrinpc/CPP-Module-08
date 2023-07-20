#include "Span.hpp"
#include <list>
#include <deque>
#include <ctime>
#include <cstdlib>

int	main(void)
{
	Span 			sp = Span(5);
	Span 			sp2 = Span(10);
	Span			sp3 = Span(NUM_ELM);
	std::list<int>	lst;
	std::deque<int>	deq;
	int				arr[] = {3, 15 , 48, -9, -100, 17, 29, -25, 5, 99};

	std::srand(static_cast<unsigned int>(std::time(0)));
	for (int i = 0; i < NUM_ELM; ++i) {
        int randomNumber = MIN_ELM + std::rand() % (MAX_ELM - MIN_ELM + 1);
        deq.push_back(randomNumber);
    }

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
		sp2.addNumber(-23);
		sp2.addNumber(-2);
		// sp2.addNumber(-101);
		// sp2.addNumber(6);
		// sp2.addNumber(17);
		sp2.addMultipleSafe(lst);
		// sp2.addMultiple(lst);
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

	std::cout << std::endl;

	try
	{
		sp3.addMultipleSafe(deq);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}