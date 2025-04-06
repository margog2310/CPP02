/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 21:29:26 by mganchev          #+#    #+#             */
/*   Updated: 2025/04/06 22:40:49 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    const Point a;
    const Point b(Fixed(5), Fixed(0));
    const Point c(Fixed(0), Fixed(5));

    const Point inside(2, 2);
    const Point outside(6, 6);
    const Point edge(0, 2);

    std::cout << "Point (2, 2) is " 
              << (bsp(a, b, c, inside) ? "inside" : "outside") 
              << " the triangle." << std::endl;

    std::cout << "Point (6, 6) is " 
              << (bsp(a, b, c, outside) ? "inside" : "outside") 
              << " the triangle." << std::endl;

    std::cout << "Point (0, 2) is " 
              << (bsp(a, b, c, edge) ? "inside" : "on the edge of") 
              << " the triangle." << std::endl;

    return 0;
}