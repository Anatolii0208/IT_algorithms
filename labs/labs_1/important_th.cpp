#include <iostream>

using namespace std;
typedef long long ll;

void master()
{
    ll a, b;
    cin >> a >> b;
    cout << a / b << " " << a % b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    master();

    return 0;
}