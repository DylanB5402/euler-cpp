//
// Created by dylan on 8/8/20.
//

#include "utils.h"
#include <vector>
#include <iostream>

void print_vector(std::vector<int> vect) {
    for (int i : vect) {
        std::cout << i << " ";
    }
}