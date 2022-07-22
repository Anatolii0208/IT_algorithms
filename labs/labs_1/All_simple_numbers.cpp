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
    int cnt = 0;
    while (true)
    {
        ll n;
        cin >> n;
        if (!n)
            break;
        if (IsPrime(n))
            cnt++;
    }
    cout << cnt;
}

int main()
{
    master();
}