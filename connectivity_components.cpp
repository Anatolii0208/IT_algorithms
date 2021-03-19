#include <iostream>
using namespace std;
 
int m[1000][1000];
bool used[1000]{};
 
void dfs(int s,int n) {
    used[s] = 1;
    for (int i = 0; i < n; i++) {
        if (used[i] == 0 && m[s][i] == 1)
            dfs(i,n);
    }
}
 
int main()
{
    int cnt = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
 
    for (int i = 0; i < n; i++) {
        if (used[i] == 0) {
            dfs(i,n);
            cnt++;
        }
    }
 
    cout << cnt << endl;
 
    return 0;
}
