//
// Created by dylan on 8/10/20.
//

#include "../include/p4.h"
#include <iostream>
#include <cmath>
#include <sstream>

namespace p4 {

    void solve() {
        int n_digits = 3;
        int max_n_digit_num = pow(10, n_digits) - 1;
        int product;
        int largest_palindrome = 0;
        for (int x = max_n_digit_num; x > 0; x--) {
            for (int y = max_n_digit_num; y > 0; y--) {
                product = x * y;
                if (isPalindromic(product)) {
                    if (product > largest_palindrome) {
                        largest_palindrome = product;
                    }
                }
            }
        }
        std::cout << largest_palindrome;
    }

    bool isPalindromic(int num) {
        int original_num = num;
        int digits = std::to_string(num).size();
        int reverse = 0;
        int temp = num;
        for (int i = 1; i <= digits; i++) {
            temp = num % 10;
            reverse += temp * pow(10, (digits - i));
            num = (num - temp)/10;
        }
        return reverse == original_num;
    }
}