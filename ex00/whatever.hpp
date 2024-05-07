/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:04:04 by omakran           #+#    #+#             */
/*   Updated: 2024/05/07 17:06:48 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void    swap(T &a, T &b) {
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

/*
the intention is to only compare the values and not modify them,
it's better to use 'const' to indicate that intention and to prevent accidental modification of the arguments.
*/
template <typename T>
T min(const T& a, const T& b) {
    return (b < a) ? b : a;
}

template <typename T>
T max(const T& a, const T& b) {
    return (a < b) ? b : a;
}

# endif