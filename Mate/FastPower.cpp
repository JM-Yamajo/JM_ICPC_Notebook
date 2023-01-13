#include <bits/stdc++.h>

using namespace std;

long long fastPower(int base, int exponent) {
  
    long long result = 1;
  
    while (exponent > 0) {
      
        if (exponent % 2 == 1) {
            result = result * base;
        }
      
        base = base * base;
        exponent = exponent / 2;
      
    }
  
    return result;
  
}

int main() {
  
    int base, exponent;
  
    cout << "Enter base: ";
    cin >> base;
  
    cout << "Enter exponent: ";
    cin >> exponent;
  
    cout << base << "^" << exponent << " = " << fastPower(base, exponent) << endl;
  
    return 0;
  
}
