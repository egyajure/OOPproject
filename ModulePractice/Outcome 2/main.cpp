//snakes and ladders!!

#include <iostream>
#include "turn.cpp"
#include "snakes.cpp"
#include "ladders.cpp"
using namespace std;

int main (){
    bool end = false;
    int spot = 1;
    while (end == false){
        spot = input(spot);
        spot = snakes(spot);
        spot = ladders(spot);
        if (spot == 0){
            cout<< "You Quit!";
            end = true;
        }
        else if (spot == 100){
            cout<< "You Win!";
            end = true;
        }
        else{
            cout<< "You are now on square "<< spot<< "\n";
        }
    }

}