#include "Fixed.hpp"

//default constructor
Fixed::Fixed()
	: m_fpValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

//destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//assignation operator overload
Fixed & Fixed::operator= (const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->m_fpValue = other.getRawBits();
	return (*this);
}

//public m-methods
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_fpValue);
}

void	Fixed::setRawBits(int const raw)
{
	m_fpValue = raw;
}