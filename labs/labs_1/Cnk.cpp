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
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define dfori(a, b) for (int i = b - 1; i >= a; i--)
#define dforj(aa, b) for (int j = b - 1; j >= a; j--)
#define end cout << "\n";

ll MOD = 1000000000 + 7;

ll C(ll n, ll k)
{
    if (!k || k == n)
        return 1;
    // cout << n << " " << k;
    // end;
    return C(n - 1, k - 1) % MOD + C(n - 1, k) % MOD;
}

void master()
{
    ll n, k;
    cin >> n >> k;
    cout << C(n, k) % MOD;
    end;
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