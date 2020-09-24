#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<vector<int> > a;
    int n, i, j, k, q, e, ix, jx;

    cin >> n;
    cin >> q;

    for (i = 0; i < n; i++)
    {
        vector<int> row;
        cin >> k;

        for (j = 0; j < k; j++)
        {
            cin >> e;
            row.push_back(e);
        }

        a.push_back(row);
    }

    for (i = 0; i < q; i++) {
        cin >> ix >> jx;

        cout << a[ix][jx] << endl;

    }
}