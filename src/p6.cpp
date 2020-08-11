//
// Created by dylan on 8/10/20.
//

#include "../include/p6.h"
#include <cmath>
#include <iostream>

namespace p6 {

    void solve() {
        int sum = 0;
        int sum_of_squares = 0;
        int square_of_sums = 0;
        for (int i = 1; i <= 100; i++) {
            sum += i;
            sum_of_squares += i * i;
        }
        square_of_sums = sum * sum;
        std::cout <<  square_of_sums - sum_of_squares;
    }
}
