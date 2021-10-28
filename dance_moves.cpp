#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        int cnt = 0;

        if (x < y)
        {
            while (x < y)
            {
                x = x + 2;
                cnt++;
            }
        }

        if (x > y)
        {
            while (x > y)
            {
                x = x - 1;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}