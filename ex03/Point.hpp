/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 20:50:03 by mganchev          #+#    #+#             */
/*   Updated: 2025/04/06 22:24:18 by mganchev         ###   ########.fr       */
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
        Point(const Fixed& x, const Fixed& y);
        Point(const Point& point);
        Point& operator=(const Point& point);
        Point operator+(const Point& point) const;
        Point operator-(const Point& point) const;
        ~Point();
        float   getX() const;
        float    getY() const;
} ;

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif