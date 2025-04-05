#include "Fixed.hpp"

Fixed::Fixed()
{
    _fixedPointValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
    _fixedPointValue = f._fixedPointValue;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f)
        this->_fixedPointValue = f._fixedPointValue;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
    std::cout << "setRawBits member function called" << std::endl;
}