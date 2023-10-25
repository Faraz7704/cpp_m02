/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:41:39 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/25 15:38:44 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FIXED_HPP
# define    FIXED_HPP

#include    <iostream>
#include    <math.h>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    Fixed(void);
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed &rhs);
    Fixed& operator=(const Fixed &rhs);
    ~Fixed();

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream & operator<<(std::ostream &o, Fixed const &i);

#endif