#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <map>

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size = sizeof(arr) / sizeof(int);
	std::vector<int> vec;
	std::list<int> lst;

	add(vec, arr, size);
	add(lst, arr, size);

	try {
        std::vector<int>::iterator res1 = easyfind(vec, 3);
        std::cout << "index: " << std::distance(vec.begin(), res1) << std::endl;
		std::list<int>::iterator res2 = easyfind(lst, 8);
        std::cout << "index: " << std::distance(lst.begin(), res2) << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return (0);
}
