#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {

    if (b == 0) 
        return a;
        
    return gcd(b, a % b);
   
}

int main() {

    int a, b;
    
    cout << "Ingresa dos números: ";
    
    cin >> a >> b;
    
    cout << "El MCD de " << a << " y " << b << " es " << gcd(a, b);
    
}
