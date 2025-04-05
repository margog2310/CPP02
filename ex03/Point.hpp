/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 20:50:03 by mganchev          #+#    #+#             */
/*   Updated: 2025/04/05 21:03:03 by mganchev         ###   ########.fr       */
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
        Fixed& operator=(const Fixed& point);
        ~Fixed();
}

bool    bsp(Point const a, Points const b, Point const c, Point const point);

#endif