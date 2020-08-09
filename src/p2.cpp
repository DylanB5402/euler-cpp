//
// Created by dylan on 8/8/20.
//

#include "p2.h"
#include <math.h>
#include <iostream>
#include <vector>
#include "utils.h"
namespace p2 {

    void solve() {
        int fibonacci = 2;
        int last_fibonacci = 1;
        int temp = 0;
        std::vector<int> fib;
        fib.push_back(last_fibonacci);
        fib.push_back(fibonacci);
//        4000000
        while (fibonacci + last_fibonacci < 10) {
            temp = fibonacci;
            fibonacci += last_fibonacci;
            last_fibonacci = temp;
            fib.push_back(fibonacci);
        }
        print_vector(fib);
    }
}