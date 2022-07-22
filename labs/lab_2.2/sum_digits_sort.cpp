#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    a = abs(a);
    b = abs(b);
    int sm_a = 0;
    int sm_b = 0;
    while (a > 0) {
        sm_a += (a % 10);
        a /= 10;                                                                  
    }
    while (b > 0) {
        sm_b += b % 10;
        b /= 10;
    }
    return sm_a < sm_b;
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