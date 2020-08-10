//
// Created by dylan on 8/9/20.
//

#include "p3.h"
#include <iostream>
#include <vector>
#include "utils.h"
#include <cmath>
namespace p3 {

    void solve() {
//        int original_number = 13195;
        long original_number = 600851475143;
        long number = original_number;
        long largest_prime;
        for (long i = 3; i < (long) sqrt(original_number); i+=2) {
            if (number % i == 0) {
                number = number/i;
                largest_prime = i;
            }
        }
        std::cout << largest_prime;
    }

}