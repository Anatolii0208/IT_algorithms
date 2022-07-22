#include <iostream>

using namespace std;
using ll = long long;
ll x;

ll cnt(ll n)
{
    ll cnt_del = 0;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n && i > x)
                cnt_del++;
            else
            {
                if (i > x)
                    cnt_del++;
                if (n / i >= x)
                    cnt_del++;
            }
        }
    }
    return cnt_del;
}

int main()
{
    ll n;
    cin >> n >> x;
    if (n == x)
    {
        cout << "infinity";
    }
    else if (n < x)
        cout << 0;
    else
        cout << cnt(n - x) + 1;
    return 0;
}