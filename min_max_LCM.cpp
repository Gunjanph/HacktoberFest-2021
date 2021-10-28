#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long int ll;

int main(void)
{
    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++)
    {
        ll x, k;
        cin >> x >> k;
        cout << 2 * x << " ";
        cout << x * k * (x * k - 1) << "\n";
    }

    return 0;
}