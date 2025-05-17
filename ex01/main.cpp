/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:41:07 by mganchev          #+#    #+#             */
/*   Updated: 2025/05/17 19:11:08 by mganchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed   a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.getRawBits() << std::endl;
    std::cout << "b is " << b.getRawBits() << std::endl;
    std::cout << "c is " << c.getRawBits() << std::endl;
    std::cout << "d is " << d.getRawBits() << std::endl;

    std::cout << "a is " << a.toInt() << " as an Integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as an Integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as an Integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as an Integer" << std::endl;

    std::cout << "a is " << a.toFloat() << " as a Float" << std::endl;
    std::cout << "b is " << b.toFloat() << " as a Float" << std::endl;
    std::cout << "c is " << c.toFloat() << " as a Float" << std::endl;
    std::cout << "d is " << d.toFloat() << " as a Float" << std::endl;

    return 0;
}