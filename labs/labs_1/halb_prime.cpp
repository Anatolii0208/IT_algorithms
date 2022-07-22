// ToLiK
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;
typedef long long ll;
#define speed                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define fori(a, b) for (int i = a; i < b; i++)
#define forj(a, b) for (int j = a; j < b; j++)
#define dfori(a, b) for (int i = b - 1; i >= a; i--)
#define dforj(aa, b) for (int j = b - 1; j >= a; j--)
#define end cout << "\n";

bool prime(long long n)
{
    if (n == 1)
        return false;
    for (long long i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

void master()
{
    int n;
    cin >> n;
    int cnt = 0;
    int num = 4;
    int ans = 0;
    while (cnt < n)
    {
        fori(2, num)
        {
            if (num % i == 0 && prime(i) && prime(num / i))
            {
                ans = num;
                cnt++;
                break;
            }
        }
        num++;
    }
    cout << ans;
    end;
}

int main()
{
    speed;
    int t = 1;
    while (t--)
    {
        master();
    }

    return 0;
}