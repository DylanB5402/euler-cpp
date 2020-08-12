//
// Created by dylan on 8/8/20.
//

#include "../include/utils.h"
#include <vector>
#include <iostream>
#include <cmath>

void print_vector(std::vector<int> vect) {

    for (int i : vect) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}

bool isPrime(int num) {
    for (int i = 2; i <= (int) sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}