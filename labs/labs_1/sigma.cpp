#include <iostream>

using namespace std;

int main()
{
    long long a, s = 0, j;
    cin >> a;
    for (long long i = 1; i * i <= a; i++)
    {
        if ((i * i != a) && (a % i == 0))
        {
            s += i + a / i;
        }
        else if ((a % i == 0) && (i * i == a))
            s += i;
    }
    cout << s;
}