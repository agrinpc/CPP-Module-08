#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <deque>

int	main(void)
{
	int	arr[] = {1, 2, 9, 4, 5};
	int	size = sizeof(arr) / sizeof(int);
	std::vector<int> vec;
	std::list<int> lst;
	std::deque<int> deq;

	add(vec, arr, size);
	add(lst, arr, size);
	add(deq, arr, size);

	try {
        std::vector<int>::iterator res1 = easyfind(vec, 1);
        std::cout << "index: " << std::distance(vec.begin(), res1) << std::endl;
		std::deque<int>::iterator res2 = easyfind(deq, 9);
        std::cout << "index: " << std::distance(deq.begin(), res2) << std::endl;
		std::list<int>::iterator res3 = easyfind(lst, 8);
        std::cout << "index: " << std::distance(lst.begin(), res3) << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return (0);
}
