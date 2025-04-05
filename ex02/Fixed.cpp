/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:41:15 by mganchev          #+#    #+#             */
/*   Updated: 2025/04/05 20:46:18 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixedPointValue(0) {}

Fixed::Fixed(const Fixed& f)
{
    _fixedPointValue = f._fixedPointValue;
}

Fixed::Fixed(const int value)
{
    _fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
    _fixedPointValue = static_cast<int>(value * (1 << _fractionalBits));
}

Fixed& Fixed::operator=(const Fixed& f)
{
    if (this != &f)
        this->_fixedPointValue = f._fixedPointValue;
    return *this;
}

Fixed Fixed::operator+(const Fixed& f)
{
    return Fixed(this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed& f)
{
    return Fixed(this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed& f)
{
    return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed& f)
{
    return Fixed(this->toFloat() / f.toFloat());
}

bool Fixed::operator<(const Fixed& f) const
{
    return this->toFloat() < f.toFloat();
}

bool Fixed::operator>(const Fixed& f) const
{
    return this->toFloat() > f.toFloat();
}

bool Fixed::operator>=(const Fixed& f) const
{
    return this->toFloat() >= f.toFloat();
}

bool Fixed::operator<=(const Fixed& f) const
{
    return this->toFloat() <= f.toFloat();
}

bool Fixed::operator==(const Fixed& f) const
{
    return static_cast<bool>(f.toFloat());
}

bool Fixed::operator!=(const Fixed& f) const
{
    return static_cast<bool>(f.toFloat());
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    
    this->_fixedPointValue += 1;
    return temp;
}

Fixed& Fixed::operator++()
{
    this->_fixedPointValue += 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    
    this->_fixedPointValue -= 1;
    return temp;
}

Fixed& Fixed::operator--()
{
    this->_fixedPointValue -= 1;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
    out << f.toFloat();
    return out;
}

Fixed::~Fixed() {}

int Fixed::getRawBits() const
{
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

int Fixed::toInt() const
{
    return _fixedPointValue >> _fractionalBits;
}

float Fixed::toFloat() const
{
    return static_cast<float> (_fixedPointValue) / (1 << _fractionalBits);
}

Fixed& Fixed::min(Fixed& fpoint_1, Fixed& fpoint_2)
{
    if (fpoint_1 > fpoint_2)
        return fpoint_2;
    else
        return fpoint_1;
}

const Fixed& Fixed::min(const Fixed& fpoint_1, const Fixed& fpoint_2)
{
    if (fpoint_1 > fpoint_2)
        return fpoint_2;
    else
        return fpoint_1;
}

Fixed& Fixed::max(Fixed& fpoint_1, Fixed& fpoint_2)
{
    if (fpoint_1 > fpoint_2)
        return fpoint_1;
    else
        return fpoint_2;
}

const Fixed& Fixed::max(const Fixed& fpoint_1, const Fixed& fpoint_2)
{
    if (fpoint_1 > fpoint_2)
        return fpoint_1;
    else
        return fpoint_2;
}