/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 23:29:00 by mganchev          #+#    #+#             */
/*   Updated: 2025/04/06 22:40:26 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float   u, v, w;
    float   area, subarea;
    Point   v0v1(b - a), v0v2(c - a), v1v2(c - b);
    Point   v0p(point - a), v2p(point - c);
    
    area = (v0v1.getX() * v0v2.getY()) - (v0v1.getY() * v0v2.getX());
    subarea = (v0v1.getX() * v0p.getY()) - (v0v1.getY() * v0p.getX());

    u = subarea / area;

    subarea = (v1v2.getX() * v2p.getY()) - (v1v2.getY() * v2p.getX());
    v = subarea / area;
    w = 1 - u - v;
    if (u <= 0 || u >= 1 || v <= 0 || v >= 1 || w <= 0 || w >= 1)
        return false;
    return true;
}

/*
    https://developer.valvesoftware.com/wiki/Binary_space_partitioning
    https://www.scratchapixel.com/lessons/3d-basic-rendering/ray-tracing-rendering-a-triangle/barycentric-coordinates.html
    http://totologic.blogspot.com/2014/01/accurate-point-in-triangle-test.html
    https://math.stackexchange.com/questions/51326/determining-if-an-arbitrary-point-lies-inside-a-triangle-defined-by-three-points
    https://stackoverflow.com/questions/2049582/how-to-determine-if-a-point-is-in-a-2d-triangle
    https://news.ycombinator.com/item?id=33692947
*/