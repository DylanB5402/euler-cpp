//
// Created by dylan on 8/8/20.
//

#include "p1.h"
#include <math.h>
#include <iostream>
#include <vector>
#include <numeric>

namespace p1 {

    void solve() {
        std::vector<int> sum;
        for (int i = 3; i < 1000; i += 3) {
            sum.push_back(i);
        }
        for (int a = 5; a < 1000; a += 5) {
            if (a % 3 !=  0) {
                sum.push_back(a);
            }
        }
        std::cout << std::accumulate(sum.begin(), sum.end(), 0);

    }
}