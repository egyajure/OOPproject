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
  
    if ( (a+ b)> (c+ d)){
        cout<< "The first set has the larger sum";
    }
    else if ((a+b) < (c+d)){
        cout<< "The second set has the larger sum\n";
    }
    else {
        cout << "The two sets have equal sums \n";
    }
}