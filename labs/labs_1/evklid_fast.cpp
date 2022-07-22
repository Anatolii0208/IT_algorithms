#include <iostream>

using namespace std;
typedef long long ll;

int evklid(int a, int b)
{
    return b ? evklid(b, a % b) : a;
}

void master()
{
    ll a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    if (b == 0)
        cout << a, exit(0);
    cout << evklid(a, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    master();

    return 0;
}