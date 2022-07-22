#include <iostream>
#include <queue>
#include <vector>

#define INF 1e9
#define pii pair <int, int>

using namespace std;

const int MaxN = 100;
vector <pair <int, int> > G[MaxN];
int D[MaxN], WAY[MaxN], used[MaxN];
int n, m;

void Diijkstra(int v)
{
    priority_queue <pii, vector <pii>, greater<pii> > PQ;
    for (int i = 0; i < n; i++)
        D[i] = INF;
    D[v] = 0;
    WAY[v] = -1;
    PQ.push({0, v});
    while (!PQ.empty())
    {
        int w = PQ.top().second;
        PQ.pop();
        for (int i = 0; i < G[w].size(); i++)
        {
            int u = G[w][i].first;
            if (D[u] > D[w] + G[w][i].second)
            {
                D[u] = D[w] + G[w][i].second;
                PQ.push({D[u], u});
            }
        }
    }
    
}

int main()
{

}