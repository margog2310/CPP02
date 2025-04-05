/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:40:59 by mganchev          #+#    #+#             */
/*   Updated: 2025/04/05 19:41:00 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Fixed::Fixed(const int value)
{
    _fixedPointValue = value << _fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    _fixedPointValue = static_cast<int>(value * (1 << _fractionalBits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f)
        this->_fixedPointValue = f._fixedPointValue;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
    out << f.toFloat();
    return out;
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

int Fixed::toInt() const
{
    return _fixedPointValue >> _fractionalBits;
}

float Fixed::toFloat() const
{
    return static_cast<float> (_fixedPointValue) / (1 << _fractionalBits);
}
