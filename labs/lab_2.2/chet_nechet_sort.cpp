#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    if (a % 2 == 0 && b % 2 != 0)
        return true;
    if (b % 2 == 0 && a % 2 != 0)
        return false;
    return a < b;
}

int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    for (auto i : v) {
        cout << i << " ";
    }
}