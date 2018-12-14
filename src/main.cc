//
// Created by luis on 12/13/18.
//
#include <iostream>
#include "threeintegersort.h"

int main() {

    int32_t i1 = 10, i2 = 5, i3 = 7;
    edu::vcccd::vc::csv13::sort(i1, i2, i3);

    std::cout << "i1: " << i1 << ", i2: " << i2 << ", i3: " << i3 << std::endl;

    return 0;
}
