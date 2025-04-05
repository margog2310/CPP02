/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 20:50:38 by mganchev          #+#    #+#             */
/*   Updated: 2025/04/05 23:29:33 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const Fixed& x, const Fixed& y)
{
    _x = x;
    _y = y;
}

Point::Point(const Point& point)
{
    _x = point.x;
    _y = point.y;
}

Point& Point::operator=(const Point& point)
{
    if (this != &point)
    {
        this->_x = point.x;
        this->_y = point.y;
    }
    return *this;
}

Point::~Point() {}