#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <sstream>

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
		int		shortestSpan();
		int		longestSpan();
};

template<typename T>
std::string to_s(const T & value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

#endif