#include <bits/stdc++.h>

using namespace std;

long double C(long long n, long long k)
{
    long double nf = 1, kf = 1, knf = 1;
    for (int i = 1; i <= n; i++)
        nf *= i;
    for (int i = 1; i <= k; i++)
        kf *= i;
    for (int i = 1; i <= n - k; i++)
        knf *= i;
    return nf / (kf * knf);
}

int main()
{
    long long m;
    long long n;
    cin >> n >> m;
    if (m > n || n % 2 != m % 2)
    {
        cout << "0.0";
        return 0;
    }
    cout << fixed << setprecision(7) << (C(n, (n + m) / 2)) / (pow(2, n));
}