/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 20:50:03 by mganchev          #+#    #+#             */
/*   Updated: 2025/05/17 19:31:00 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed _x;
        const Fixed _y;

    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& point);
        Point& operator=(const Point& point);
        Point operator+(const Point& point) const;
        Point operator-(const Point& point) const;
        ~Point();
        const Fixed&   getX() const;
        const Fixed&   getY() const;
} ;

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif