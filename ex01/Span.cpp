#include "Span.hpp"

Span::Span() {return;}

Span::Span(unsigned int size): _size(size), _cur(0) {return;}

Span::~Span() {return;}

Span::Span(Span const &sp)
{
	*this = sp;
}

Span &Span::operator=(Span const &sp)
{
	int	i;

	if (this != &sp)
	{
		this->_size = sp._size;
		this->_cur = sp._cur;
		i = -1;
		while (++i < sp._cur)
			this->_vec.push_back(sp._vec[i]);
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_cur >= _size)
		throw std::runtime_error("array is full: max size is " + to_s(_size));
	_vec.push_back(num);
	_cur++;
}

int	Span::shortestSpan()
{
	int	min;
	int	tmp_min;
	int	i;

	if (_cur < 2)
		throw std::runtime_error("not enough numbers inside the array");
	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	i = 0;
	min = std::abs(tmp[0] - tmp[1]);
	while (++i < _cur - 1)
	{
		tmp_min = std::abs(tmp[i] - tmp[i + 1]);
		if (tmp_min < min)
			min = tmp_min;
	}
	return (min);
}

int	Span::longestSpan()
{
	int	max;

	if (_cur < 2)
		throw std::runtime_error("not enough numbers inside the array");
	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	max = std::abs(tmp[0] - tmp[_cur - 1]);
	return (max);
}
