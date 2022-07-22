#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
ll n = 2, m = 1000000000 + 7;

vector<vector<ll>> matrixPow(vector<vector<ll>> arr1, vector<vector<ll>> arr2)
{
    vector<vector<ll>> d(n);
    for (ll i = 0; i < n; i++)
        d[i].resize(n);
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++)
            d[i][j] = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            for (ll k = 0; k < n; k++)
            {
                d[i][j] += arr1[i][k] * arr2[k][j];
                d[i][j] %= m;
            }
        }
    }
    return d;
}

vector<vector<ll>> mod(vector<vector<ll>> arr)
{
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++)
            arr[i][j] %= m;
    return arr;
}

vector<vector<ll>> fastPow(vector<vector<ll>> arr, ll k)
{
    if (k == 1)
        return arr;
    if (k % 2 == 0)
    {
        return fastPow(matrixPow(arr, arr), k / 2);
    }
    return matrixPow(arr, fastPow(arr, k - 1));
}

void master()
{
    int k;
    vector<vector<ll>> arr = {{1, 1}, {1, 0}};
    cin >> k;
    if (k == 0)
    {
        cout << 0;
        return;
    }
    if (k == 1)
    {
        cout << 1;
        return;
    }
    ll kk;
    arr = fastPow(arr, k - 1);
    cout << arr[0][0];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    master();

    return 0;
}
