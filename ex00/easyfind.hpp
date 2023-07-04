#ifndef EASY_H
#define EASY_H

#include <iostream>
#include <stdexcept>
#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &cont, int i)
{
	typename T::iterator res;

	res = std::find(cont.begin(), cont.end(), i);
	if (res != cont.end())
		return (res);
	throw std::runtime_error("cannot find the parameter in the container");
}

template<typename T>
void	add(T &cont, int arr[], int size)
{
	int	i;

	i = -1;
	while (++i < size)
		cont.push_back(arr[i]);
}

#endif