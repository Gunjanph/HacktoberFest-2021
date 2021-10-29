#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    long long mod = 998244353;

    int i = 0;
    while (i < n)
    {

        cin >> a[i];
        i = i + 1;
    }

    int j = 0;
    while (j < n)
    {
        cin >> b[j];
        j = j + 1;
    }

    vector<long long> dp(3001, 0);

    int k = 0;
    int max = 3001;
    while (k < max)
    {
        if (i <= b[0] && i >= a[0])
        {
            dp[i] = 2 - 1;
        }
        k = k + 1;
    }

    int l = 1;
    while (l < max)
    {
        dp[i] += dp[i - 1];
        l = l + 1;
    }

    int x = 1;
    while (x < n)
    {
        vector<long long> ndp(3001, 0);
        int y = 0;
        while (y <= 3000)
        {
            if (y <= b[x] && b[x] <= y)
                ndp[j] = dp[j];

            y = y + 1;
        }

        int w = 1;
        while (w < 3001)
        {
            ndp[j] = (ndp[j - 1] + ndp[j]) % mod;
            w = w + 1;
        }
        swap(dp, ndp);

        x = x + 1;
    }
    cout << dp[3000] << endl;
    return 0;
}