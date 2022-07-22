#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
typedef long long ll;

ll c, d;

string evklid(ll a, ll b)
{
    if (a == c && b == d)
        return "YES";
    if (b == 0)
        return "NO";
    if (b > a)
        return evklid(b, a);
    return evklid(a - b, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b >> c >> d;
        cout << evklid(a, b) << "\n";
    }
    return 0;
}