#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
    private:
        int                 _fixedPointValue; 
        static const int    _fractionalBits = 8;

    public:
        Fixed(); // constructor
        Fixed(const Fixed& f); // copy constructor > makes a copy of object
        Fixed(const int value);
        Fixed(const float value);
        Fixed& operator=(const Fixed& f); // copy assignment operator overload > "overloads" = operator
        friend std::ostream& operator<<(std::ostream& out, const Fixed& f);
        ~Fixed(); // destructor
        int getRawBits() const; // returns raw value of fixed-point value
        void    setRawBits(int const raw); // sets raw value of fixed point number
        float toFloat() const;
        int toInt() const;
} ;

#endif