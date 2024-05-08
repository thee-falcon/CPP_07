/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 20:44:21 by omakran           #+#    #+#             */
/*   Updated: 2024/05/08 22:08:12 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    try {
        Array<int>a(29);
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;
        a[3] = 4;
        a[4] = 5;
        a[5] = 6;
        a[6] = 7;
        a[7] = 8;
        a[8] = 9;
        for (size_t i = 0; i < a.size(); i++)
        {
            std::cout << a[i] << " ";
        }
    }
    catch(std::out_of_range &e) {
        std::cout << e.what();
    }
    std::cout << "\n";
    return (0);
}