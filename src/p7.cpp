//
// Created by dylan on 8/11/20.
//

#include "../include/p7.h"
#include <cmath>
#include <iostream>
#include "../include/utils.h"

namespace p7 {

    void solve() {
        int prime_counter = 4;
        int a = 7;
        while (prime_counter < 10001) {
            a += 2;
            if (a % 5 != 0 && a % 3 != 0 && a % 7 != 0) {
                if (isPrime(a)) {
                    prime_counter++;
                }
            }
        }
        std::cout << a;
    }

}
