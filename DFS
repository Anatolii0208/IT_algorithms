int m[1000][1000];
bool used[1000]{};
 
void dfs(int s,int n) {
    used[s] = 1;
    for (int i = 0; i < n; i++) {
        if (used[i] == 0 && m[s][i] == 1)
            dfs(i,n);
    }
}
