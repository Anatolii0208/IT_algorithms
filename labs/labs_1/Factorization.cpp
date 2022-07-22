#include <iostream>

using namespace std;
typedef long long ll;

void master()
{
    ll n;
    cin >> n;
    ll N = n;
    bool isPrime = true;

    while (n % 2 == 0)
    {
        n /= 2;
        isPrime = false;
        if (n == 1)
        {
            cout << 2;
            exit(0);
        }
        else
        {
            cout << 2 << "*";
        }
    }
    for (int i = 3; i <= N; i += 2)
    {
        while (n % i == 0)
        {
            n /= i;
            isPrime = false;
            if (n == 1)
            {
                cout << i;
                exit(0);
            }
            else
            {
                cout << i << "*";
            }
        }
    }
    if (isPrime)
    {
        cout << n;
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