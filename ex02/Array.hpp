/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:59:40 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/17 15:55:49 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
class Array
{
private:
    T*              array;
    unsigned int    n;
public:
    Array(): n(0) {array = new T[0];}

    Array(Array const & instance): n(instance.n)
    {
        array = new T[n];
        for (unsigned int i = 0; i < n; i++)
            array[i] = instance.array[i];
    }

    ~Array() {delete[] array;}

    Array & operator=(Array const & instance)
    {
        n = instance.n;
        delete[] array;
        array = new T[n];
        for (unsigned int i = 0; i < n; i++)
            array[i] = instance.array[i];
    }

    Array(unsigned int n): n(n) {array = new T[n];}

    T   &operator[](unsigned int i) const
    {
        if (i >= n)
            throw std::exception();
        return (array[i]);
    }

    unsigned int    size() const
    {
        return (n);
    }
};
