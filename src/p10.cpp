//
// Created by dylan on 8/16/20.
//

#include "../include/p10.h"
#include "../include/utils.h"
#include <cmath>
#include <iostream>

namespace p10 {

    void solve() {
        long max = 2000000;
        long sum = 2;
        for (long i = 3; i < max; i += 2) {
            if (isPrime(i)) {
                sum += i;
            }
        }
        std::cout << sum;
    }
}