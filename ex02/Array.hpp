/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 20:44:17 by omakran           #+#    #+#             */
/*   Updated: 2024/05/08 22:03:45 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>

class Array
{
private:
    // pointer to dynamicall allocated array
    T               *array;
    unsigned int    len;
public:
    // constructor:
    Array() : array(NULL), len(0) {};

    // construction with an unsigned int n:
    Array( unsigned int n ) {
        if (static_cast<int> (n) < 0)
            throw std::out_of_range("invalid size!");
        len = n;
        array = new T[len];
    }

    // copy constructor:
    Array( Array const &copy) {
        if (array)
            delete [] array;
        len = copy.len;
        array = new T[len];
        for (int i = 0; i < len ; i++)
        {
            array[i] = copy.array[i];
        }
    }

    //  assignment operator:
    Array &operator=( Array const &assign ) {
        if (array)
            delete [] array;
        len = assign.len;
        array = new T[len];
        for (int i = 0; i < len; i++)
        {
            array[i] = assign.array[i];
        }
        return (*this);
    }
    
    T &operator[]( size_t i ) {
        if (i >= static_cast<size_t>(len))
            throw (std::out_of_range("exeption: out_of_range"));

        return (array[i]);
    }
        
    const T &operator[]( size_t i ) const {
        if (i >= static_cast<size_t>(len))
            throw (std::out_of_range("exeption: out_of_range"));
        return (array[i]);
    }

    // member function size():  
    int size() {
        return (len);
    }

    // destructor:
    ~Array() {
        if (array)
            delete [] array;
    };
};

#endif