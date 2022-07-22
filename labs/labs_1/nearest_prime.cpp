#include <iostream>

using namespace std;
typedef long long ll;

bool IsPrime(ll n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void master()
{
    ll n, i = 0;
    cin >> n;
    while (true)
    {
        if (n - i > 0)
        {
            if (IsPrime(n - i))
            {
                cout << n - i;
                break;
            }
            else if (IsPrime(n + i))
            {
                cout << n + i;
                break;
            }
        }
        else
        {
            if (IsPrime(n + i))
            {
                cout << n + i; //
                break;
            }
        }
        i++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    master();

    return 0;
}