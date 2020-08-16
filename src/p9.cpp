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
        int m = 499;
        int n = 1;
//        while (m * n < 998 && a + b + c != 1000) {
//            for (n = 1; n < 499; n++) {
//                if (is_coprime(m, n)) {
//                    a = m * n;
//                    b = ((m * m) - (n * n)) / 2;
//                    c = ((m * m) + (n * n)) / 2;
//                    if (a + b + c == 1000) {
//                        std::cout << a * b * c;
//                    }
////                    std::cout << a << "\n";
////                    std::cout << b << "\n";
////                    std::cout << c << "\n";
////                    std::cout << "----\n";
//                    std::cout << m << " \n" << n << "\n" << "-----\n";
//
//                }
//            }
//            m--;
//        }
        for (m = 2; m <= 998; m++) {
            for (n = 1; n <= 998; n++) {
                for (n = 1; n < 499; n++) {
                    if (m > n) {
                        if (is_coprime(m, n)) {
                            a = m * n;
                            b = ((m * m) - (n * n)) / 2;
                            c = ((m * m) + (n * n)) / 2;
                            if (a + b + c == 1000) {
                                std::cout << a * b * c;
                            }
//                    std::cout << a << "\n";
//                    std::cout << b << "\n";
//                    std::cout << c << "\n";
//                    std::cout << "----\n";
                            std::cout << m << " \n" << n << "\n" << "-----\n";

                        }
                    }
                }
            }
        }

//        std::cout << m << " \n" << n << "\n";
        std::cout << a << "\n";
        std::cout << b << "\n";
        std::cout << c << "\n";
//        std::cout << "----\n";
    }

    std::vector<int> get_all_factors(int num) {
        std::vector<int> factors;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                factors.push_back(i);
            }
        }
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