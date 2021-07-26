#include <iostream>

int input (int a){ 
    int input = 0;
    std::cin >> input;
    
    if ((input + a) > 100){
        a = a;
    }
    else if (input != 0){
       a = a + input; 
    }
    else if (input == 0){
        a = 0;
    }
    return a;
};
