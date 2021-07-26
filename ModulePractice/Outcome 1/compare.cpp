#include <iostream>

void compare (int a,int b) {
    if (a > b){
        std::cout << "The first set has the larger sum\n";
    }
    else if (b < a){
        std::cout << "The second set has the larger sum\n";
    }
    else {
        std::cout << "the two sets have equal sums\n";
    }
}