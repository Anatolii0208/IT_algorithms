#include <iostream>

using namespace std;

const int maxn = 100;


int G[maxn][maxn];
bool used[maxn];
int n;

void dfs(int v) {
  cout << v + 1 << " ";
  used[v] = true;
  for (int i = 0; i < n; i++)
    if (G[v][i] && !used[i])
	    dfs(i);
}


int main() {
  cin >> n;
  for (int i = 0; i < n; i++) 
    used[i] = false;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> G[i][j];
  dfs(0);
  cout << endl;
  return 0;
}
