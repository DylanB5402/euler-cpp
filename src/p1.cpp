//
// Created by dylan on 8/8/20.
//

#include "../include/p1.h"
#include <iostream>

namespace p1 {

    void solve() {
        int sum = 0;
        for (int i = 3; i < 1000; i += 3) {
            sum += i;
        }
        for (int a = 5; a < 1000; a += 5) {
            if (a % 3 !=  0) {
                sum += a;
            }
        }
        std::cout << sum;
    }
}