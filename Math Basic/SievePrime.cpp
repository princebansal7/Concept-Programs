#include<bits/stdc++.h>
using namespace std;

//____Naive way O(sqrt(n))______________________________

bool isPrime(long long n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


//___Sieve of Eratosthenes method________________________

void sievePrime(int n) {

    vector<int> ans;

    vector<bool> prime(n + 1, true);
    int count = 0;

    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++) {

        if (prime[i]) {
            count++;
            ans.push_back(i);
            for (int j = 2 * i; j < n; j = j + i)
                prime[j] = false;
        }
    }

    for (auto x : ans)
        cout << x << " ";

    cout << endl;

    cout << "Total Prime no till " << n << " are: " << count << endl;
}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    long long n; cin >> n;

    // if (isPrime(n))
    //     cout << "Yes, Prime" << endl;
    // else
    //     cout << "No, Not Prime" << endl;

    sievePrime(n);

    return 0;
}
