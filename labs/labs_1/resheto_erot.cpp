#include <iostream>
using namespace std;

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
    for (j = 2; j <= N; j++)
    {
        if (massiv[j] == true && j >= a)
            cnt++;
    }
    cout << cnt;
}

int main()
{
    int a, b;
    cin >> a >> b;
    bool arr[b];
    Eratosthenes(arr, b, a);
    return 0;
}
