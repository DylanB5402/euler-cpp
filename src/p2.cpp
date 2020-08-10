//
// Created by dylan on 8/8/20.
//

#include "p2.h"
#include <iostream>

namespace p2 {

    void solve() {
        int fibonacci = 2;
        int last_fibonacci = 1;
        int temp;
        int sum = fibonacci;
        while (fibonacci + last_fibonacci < 4000000) {
            temp = fibonacci;
            fibonacci += last_fibonacci;
            last_fibonacci = temp;
            if (fibonacci % 2 == 0) {
                sum += fibonacci;
            }
        }
        std::cout << sum;
    }
}