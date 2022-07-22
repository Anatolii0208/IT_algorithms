#include <iostream>
#include <vector>

using namespace std;

const int maxn = 100;



int G[maxn][maxn];
bool used[maxn];
int colors[maxn];
int color;
int n;
vector <int> d;

void dfs1(int v) {
  d.push_back(v);
  used[v] = true;
  for (int i = 0; i < n; i++)
    if (G[v][i] && !used[i]) {
        G[v][i] = 0;
	dfs1(i);
     }
}

void dfs2(int v) {
  used[v] = true;
  colors[v] = color;
  for (int i = 0; i < n; i++)
    if (G[v][i] && !used[i]) {
	dfs2(i);
     }
}



int main() {
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> G[i][j];
  
// ========== DFS1 =============
  for (int i = 0; i < n; i++) 
    used[i] = false;
  for (int i = 0; i < n; i++)
     if (!used[i])
       dfs1(i);

// ========== DFS2 =============
  color = 1;
  for (int i = 0; i < n; i++) 
    used[i] = false;
  for (int i = 0; i < n; i++)
     if (!used[d[i]]) {
       dfs2(d[i]);
       color++;
     }
  // ============================
  for (int i = 0; i < n; i++)
    cout << d[i] + 1 << " ";
  cout << endl;
  for (int i = 0; i < n; i++)
    cout << i + 1 << " " << colors[i] << endl;
  return 0;
}
