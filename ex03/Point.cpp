/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 20:50:38 by mganchev          #+#    #+#             */
/*   Updated: 2025/04/06 22:24:28 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const Fixed& x, const Fixed& y): _x(x), _y(y) {}

Point::Point(const Point& point): _x(point._x), _y(point._y) {}

Point& Point::operator=(const Point& point)
{
    (void)point;
    return *this;
}

Point Point::operator-(const Point& point) const
{
    return Point(Fixed(this->getX()) - Fixed(point.getX()), Fixed(this->getY()) - Fixed(point.getY()));
}

Point Point::operator+(const Point& point) const
{
    return Point(Fixed(this->getX()) + Fixed(point.getX()), Fixed(this->getY()) + Fixed(point.getY()));
}

Point::~Point() {}

float Point::getX() const
{
    return this->_x.toFloat();
}

float Point::getY() const
{
    return this->_y.toFloat();
}