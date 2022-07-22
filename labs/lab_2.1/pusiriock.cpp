// ToLiK
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;
typedef long long ll;
#define speed                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n";

void master()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[i])
                swap(v[i], v[j]), cnt++;
        }
    }

    cout << cnt;
}

int main()
{
    speed;
    int t = 1;
    while (t--)
    {
        master();
    }

    return 0;
}