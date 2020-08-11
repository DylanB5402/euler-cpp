//
// Created by dylan on 8/10/20.
//

#include "../include/p5.h"
#include <iostream>
#include <vector>
#include <cmath>

namespace p5 {

    void solve() {
        long a = 100;
        while (!isEvenlyDivisible(a)) {
            a += 20;
        }
        std::cout << a <<"\n";
    }

    bool isEvenlyDivisible(long num) {
        for (long i = 11; i <= 20; i += 1) {
            if (num % i != 0) {
                return false;
            }
        }
        return true;
    }

}
