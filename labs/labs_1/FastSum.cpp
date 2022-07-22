
#include <iostream>

using namespace std;

long long k;

long long pow(long long a, long long b)
{
    if (b == 0)
    {
        return 0;
    }
    if (b % 2 == 0)
    {
        return ((pow(a, b / 2)) % k * 2) % k;
    }
    return (a + (pow(a, b - 1)) % k) % k;
}

int main()
{
    long long a, b, n, m;
    cin >> a >> b >> k;
    cout << pow(a, b);
}