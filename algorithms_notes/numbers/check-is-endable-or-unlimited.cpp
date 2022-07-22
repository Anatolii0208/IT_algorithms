#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;

ll gcd(ll x, ll y)
{
    if (!x || !y)
    {
        return x > y ? x : y;
    }
    for (ll t; static_cast<void>(t = x % y), t; x = y, y = t)
        ;
    return y;
}

int main()
{
    ll p, q, b;
    cin >> p >> q >> b;
    if (p == 0)
    {
        cout << "F";
        return 0;
    }
    ll g = gcd(p, q);
    q /= g;
    p /= g;
    while (q > 1)
    {
        g = gcd(q, b);
        if (g == 1)
        {
            break;
        }
        while (q % g == 0)
        {
            q /= g;
        }
    }
    if (q == 1)
    {
        cout << "F";
    }
    else
    {
        cout << "INF";
    }
    return 0;
}