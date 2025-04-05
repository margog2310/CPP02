/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:40:43 by mganchev          #+#    #+#             */
/*   Updated: 2025/04/05 19:40:45 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed
{
    private:
        int                 _fixedPointValue; 
        static const int    _fractionalBits = 8;

    public:
        Fixed(); // constructor
        Fixed(const Fixed& f); // copy constructor > makes a copy of object
        Fixed& operator=(const Fixed& f); // copy assignment operator overload > "overloads" = operator
        ~Fixed(); // destructor
        int getRawBits() const; // returns raw value of fixed-point value
        void    setRawBits(int const raw); // sets raw value of fixed point number
} ;

#endif