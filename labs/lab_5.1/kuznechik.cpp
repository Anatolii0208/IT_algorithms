#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << 1;
        return 0;
    }
    int arr[100];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < k; i++) arr[i-1] *= 2;
    for (int i = k; i < n; i++) {
        int sm = 0;
        for (int j = i - k ; j < i; j++) sm+=arr[j];
        arr[i] = sm;

    } 
    cout << arr[n-1];
}