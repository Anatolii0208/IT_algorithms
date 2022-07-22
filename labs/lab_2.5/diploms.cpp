#include <iostream>

using namespace std;

long long check(long long w, long long h, long long n, long long m)
{
    long long cnt = (m / w) * (m / h);
    return cnt - n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long w, h, n;
    cin >> w >> h >> n;

    long long left = 0, right = max(w, h) * n, mn = 0;
    while (right - left > 1)
    {
        long long midd = (right + left) / 2;
        if (check(w, h, n, midd) >= 0)
        {
            right = midd;
        }
        else
        {
            left = midd;
        }
    }

    cout << right;

    return 0;
}