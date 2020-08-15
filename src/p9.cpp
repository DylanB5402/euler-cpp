//
// Created by dylan on 8/15/20.
//

#include "../include/p9.h"
#include <cmath>
#include <iostream>
#include "../include/utils.h"

namespace p9 {

    void solve() {
        int a = 0;
        int b = 0;
        int c = 1;
        while (a * a + b * b != c * c && a < 1000) {
            a++;
            for (b = 1; b < 1000 - a - 1; b++) {
                c = 1000 - a - b;
                std::cout << a << "\n";

            }

        }
        std::cout << a << "\n";
        std::cout << b << "\n";
        std::cout << c << "\n";
    }

    std::vector<int> get_all_factors(int num) {
        std::vector<int> factors;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                factors.push_back(i);
            }
        }
//        print_vector(factors);
        return factors;
    }

    bool is_coprime(int a, int b) {
        std::vector<int> a_factors = get_all_factors(a);
        std::vector<int> b_factors = get_all_factors(b);
        for (int i: a_factors) {
            for (int j: b_factors) {
                if (i == j && i != 1) {
                    return false;
                }
            }
        }
        return true;
    }
}