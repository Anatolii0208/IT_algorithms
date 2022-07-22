#include <iostream>

using namespace std;
typedef long long ll;

void master()
{
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << 4;
    }
    else
    {
        if (n % 4 == 1)
        {
            cout << (2 + 3 + 1 + 4) % 5;
        }
        else if (n % 4 == 2)
        {
            cout << (1 + 1 + 4 + 4) % 5;
        }
        else if (n % 4 == 3)
        {
            cout << (4 + 3 + 2 + 1) % 5;
        }
        else if (n % 4 == 0)
        {
            cout << 4;
        }
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