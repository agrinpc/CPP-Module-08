#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <sstream>

template<typename T>
std::string	to_s(const T &val)
{
    std::ostringstream oss;
    oss << val;
    return oss.str();
}


template<typename T>
void	add(T &cont, int arr[], int size)
{
	int	i;

	i = -1;
	while (++i < size)
		cont.push_back(arr[i]);
}

class Span
{
	private:
		Span();
		std::vector<int>	_vec;
		int					_size;
		int					_cur;

	public:
		Span(unsigned int size);
		Span(Span const &sp);
		~Span();

		Span &operator=(Span const &sp);

		void	addNumber(int num);

		template<typename T>
		void	addMultiple(T inp)
		{
			if (_cur + (int)inp.size() >= _size)
				throw std::runtime_error("array is full: max size is " + to_s(_size));
			_vec.insert(_vec.end(), inp.begin(), inp.end());
			_cur += (int)inp.size();
		};

		int		shortestSpan();
		int		longestSpan();
};


#endif