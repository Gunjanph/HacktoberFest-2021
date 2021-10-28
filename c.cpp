#include <bits/stdc++.h>
using namespace std;

map<int, int> score;

int win(char a, char b)
{
    if (a == 'G' && b == 'C')
        return 1;
    if (a == 'C' && b == 'P')
        return 1;
    if (a == 'P' && b == 'G')
        return 1;
    return 0;
}

int main()
{
    vector<int> rank;
    int n, m;
    cin >> n >> m;
    n = n * 2;
    char a[n][m];

    int i = 0;
    while (i < n)
    {
        rank.push_back(i);
        score[i] = 0;
        int j = 0;
        while (j < m)
        {
            cin >> a[i][j];
            j = j + 1;
        }
        i = i + 1;
    }

    int r = 0;
    while (r < m)
    {
        int i = 0;
        while (i < n)
        {
            int p1 = rank[i], p2 = rank[i + 1];
            score[p2] += win(a[p2][r], a[p1][r]);
            score[p1] += win(a[p1][r], a[p2][r]);
            i = i + 2;
        }
        sort(rank.begin(), rank.end(), [](int a, int b)
             {
                 if (score[a] == score[b])
                 {
                     return a > b;
                 }
                 return score[a] < score[b];
             });
        r = r + 1;
    }
    reverse(rank.begin(), rank.end());
    for (auto itr : rank)
        cout << itr + 1 << endl;

    return 0;
}