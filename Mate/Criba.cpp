#include<bits/stdc++.h>

using namespace std;

const int n = 1e2;
bitset<n> primes;

void criba(){

    primes.set(); // set all bits to 1

    primes[0] = primes[1] = 0; // 1 is not prime

    for (int i = 2; (i * i) <= n; i += 1) {

        if (primes[i]) {

            for (int j = (i * i); j <= n; j += i) {

                primes[j] = 0;

            }

        }

    }

    for(int i = 2; i <= n; i++)
        if(primes[i])
            cout << i << " ";

}

int main() {

    criba();

    return 0;
}
