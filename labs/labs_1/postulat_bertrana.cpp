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

void Eratosthenes(bool massiv[], int N, int a)
{
    int i, j;
    for (j = 2; j <= N; j++)
        massiv[j] = true;
    j = 2;
    while (j * j <= N)
    {
        i = j * j;
        if (massiv[j])
            while (i <= N)
            {
                massiv[i] = false;
                i = i + j;
            }
        j = j + 1;
    }
    int cnt = 0;
    for (j = 2; j < N; j++)
    {
        if (massiv[j] == true && j > a)
            cnt++;
    }
    cout << cnt;
}

void master()
{
    int n;
    cin >> n;
    bool arr[n * 2];
    Eratosthenes(arr, n * 2, n);
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