#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
    _fixedPointValue = f._fixedPointValue;
    _fractionalBits = f._fractionalBits;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed& operator=(const Fixed& f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
}

void setRawBits(int const raw)
{
    
}