/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:59:20 by ndesprez          #+#    #+#             */
/*   Updated: 2024/03/17 15:39:23 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> array(10);

    try
    {
        array[6] = 8;
        std::cout << array[6] << std::endl;
        std::cout << array[50] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "Index out of bounds." << std::endl;
    }
    return (0);
}
