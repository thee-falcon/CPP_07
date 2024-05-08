/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 20:44:17 by omakran           #+#    #+#             */
/*   Updated: 2024/05/08 19:24:10 by omakran          ###   ########.fr       */
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
    Array() : array(0), len(0) {};

    // construction with an unsigned int n:
    Array( unsigned int n ) : array(new T[n]), len(n) {
        for (unsigned int i = 0; i < len; i++)
        {
            // default initialization.
            array[i] = T();
        }
    }

    // copy constructor:
    Array( Array const &copy) {
        if (array)
            delete [] array;
        len = copy.len;
        array = new T[len];
        for (unsigned int i = 0; i < len ; i++)
        {
            array[i] = copy.array[i];
        }
    }

    //  assignment operator:
    Array &operator=( Array const &assign ) {
        if (this != &assign) {
            T *tmp = new T[assign.len];
            for (unsigned int i = 0; i < assign.len; i++)
            {
                tmp[i] = assign.array[i];
            }
            delete [] array;
            array = tmp;
            len = assign.len;
        }
        return (*this);
    }
    
    T &operator[]( size_t i ) {
        if (i >= static_cast<size_t>(len))
            throw (std::out_of_range("exeption: out_of_range"));
        return (array[i]);
        }
        
    const T &operator[](size_t i) const {
        if (i >= static_cast<size_t>(len))
            throw (std::out_of_range("exeption: out_of_range"));
        return (array[i]);
        }

    // member function size():  
    unsigned int size() const{
        return (len);
    }

    // destructor:
    ~Array() {
        delete [] array;
    };
};

#endif