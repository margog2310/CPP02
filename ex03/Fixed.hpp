/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:41:19 by mganchev          #+#    #+#             */
/*   Updated: 2025/04/06 21:53:12 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <ieee754.h>
# include <iostream>

class Fixed
{
  private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;

  public:
	Fixed();               // constructor
	Fixed(const Fixed &f); // copy constructor > makes a copy of object
	Fixed(const int value);
	Fixed(const float value);
	Fixed &operator=(const Fixed &f);
	// copy assignment operator overload > "overloads" = operator
	Fixed operator+(const Fixed &f);
	Fixed operator-(const Fixed &f);
	Fixed operator*(const Fixed &f);
	Fixed operator/(const Fixed &f);
	Fixed operator++(int); // postfix increment
	Fixed operator--(int);
	Fixed &operator++(); // prefix increment
	Fixed &operator--();
	bool operator>(const Fixed &f) const;
	bool operator<(const Fixed &f) const;
	bool operator<=(const Fixed &f) const;
	bool operator>=(const Fixed &f) const;
	bool operator==(const Fixed &f) const;
	bool operator!=(const Fixed &f) const;
	~Fixed();                       // destructor
	int getRawBits() const;         // returns raw value of fixed-point value
	void setRawBits(int const raw); // sets raw value of fixed point number
	float toFloat() const;
	int toInt() const;
	static Fixed &min(Fixed &fpoint_1, Fixed &fpoint_2);
	static const Fixed &min(const Fixed &fpoint_1, const Fixed &fpoint_2);
	static Fixed &max(Fixed &fpoint_1, Fixed &fpoint_2);
	static const Fixed &max(const Fixed &fpoint_1, const Fixed &fpoint_2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif