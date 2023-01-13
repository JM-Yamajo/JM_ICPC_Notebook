#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {

    if (b == 0) 
        return a;

    return gcd(b, a % b);

}

ll pollard_rho(ll n) {

    ll x = rand() % (n - 1) + 1;
    ll y = x;

    ll c = rand() % (n - 1) + 1;
    ll d = 1;

    while (d == 1) {

        x = (x * x + c) % n;
        y = (y * y + c) % n;
        y = (y * y + c) % n;
        d = gcd((x > y ? (x - y) : (y - x)), n);

    }


    if (d == n)
        return pollard_rho(n);

    return d;

}

int main() {

    ll n;
    cin >> n;

    // !!!Si n no es primo manda a pollar_rho!!! 
    ll factor = pollard_rho(n);

    cout << "Factor: " << factor << endl;
    cout << "Other factor: " << n / factor << endl;

    return 0;
}
