// Дейкстра на очереди с приоритетами

#include <iostream>
#include <queue>

#define INF 1e9
#define pii pair<int, int>

using namespace std;

const int MaxN = 100;
vector< pair<int, int> > G[MaxN];
int D[MaxN], WAY[MaxN], used[MaxN];
int n, m;

void Diijkstra(int v) {
  priority_queue<pii, vector<pii>, greater<pii> > PQ;
  for (int i = 0; i < n; i++)
     D[i] = INF;
  D[v] = 0; WAY[v] = -1;
  PQ.push({0, v});
  while (!PQ.empty()) {
    int w = PQ.top().second;
    PQ.pop();
    for (int i = 0; i < G[w].size(); i++) {
      int u = G[w][i].first;
      if (D[u] > D[w] + G[w][i].second) {
         D[u] = D[w] + G[w][i].second;
         PQ.push({D[u], u});
      } 
    }
  }
}

int main() {
  /*cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b, w;
    cin >> a >> b >> w;
    a--; b--;
    G[a].push_back({b, w});
    G[b].push_back({a, w});
  } */
  
  int s,f;
  s--;
  f--;
  cin >> n >> s >> f;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int schet;
      cin >> schet;
      if (schet != -1)
        G[i].push_back({j, schet});
    }
  }

  /*for (auto i : G)
  {
    for (auto j : i)
      cout << j.first << " " << j.second << endl;
  }*/

  Diijkstra(s);
  if (D[f] == INF)
    cout << -1;
  else
    cout << D[f]+1;

  //for (int i = 0; i < n; i++)
    //cout << D[i] << endl;
  return 0;
}
// Вопросы
// Почему вектор одномерный а используем его как двух-мерный
