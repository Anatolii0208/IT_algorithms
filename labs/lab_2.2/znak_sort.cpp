#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    if (a >= 0 && b >= 0) {
        return a > b;
    }
    if (a < 0 && b < 0) {
        return a < b;
    }
    if (a < 0 && b > 0) {
        return true;
    }
    if (a > 0 && b < 0){
        return false;
    }
    if (a == 0  && b < 0){
        return false;
    }
    if (a == 0  && b > 0){
        return false;
    }
    if (a < 0  && b == 0){
        return true;
    }
    if (a > 0  && b == 0){
        return true;
    }
    return false;
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