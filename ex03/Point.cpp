/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 20:50:38 by mganchev          #+#    #+#             */
/*   Updated: 2025/05/17 19:36:12 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point& point): _x(point.getX()), _y(point.getY()) {}

Point& Point::operator=(const Point& point)
{
    if (this == &point)
        return *this;
    return *this;
}

Point Point::operator-(const Point& point) const
{
    return Point(this->getX().toFloat() - point.getX().toFloat(), this->getY().toFloat() - point.getY().toFloat());
}

Point Point::operator+(const Point& point) const
{
    return Point(this->getX().toFloat() + point.getX().toFloat(), this->getY().toFloat() + point.getY().toFloat());
}

Point::~Point() {}

const Fixed& Point::getX() const
{
    return this->_x;
}

const Fixed& Point::getY() const
{
    return this->_y;
}