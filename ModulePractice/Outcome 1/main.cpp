#include "addition.cpp"
#include "compare.cpp"
#include <iostream>
using namespace std;

int main (){
    int a,b, c, d = 0;
    cout<< "insert the first two numbers: \n";
    cin >> a; cin.ignore();
    cin >> b;
    cout<< "\ninsert the second two numbers: \n";
    cin >> c; cin.ignore();
    cin >> d;
  
    compare (addition(a,b), addition (c,d));
}
