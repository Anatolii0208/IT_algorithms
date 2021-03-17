/* INPUT
3 - amount of tops 1 - from 2 - to
adjacency matrix 
0 -1 2
3 0 -1
-1 4 0
*/
#include <bits/stdc++.h>

using namespace std;
vector <pair<int,int>> G[10000];
bool used[1000];
int way[1000];
int d[1000];

void dejkstra(int start,int end,int n){
    d[start] = 0;
    way[start] = -1;
    int u = start;
    for (int step = 0; step < n - 1; step++){
        int u1 = u;
        u = 99999999;
        int min1 = 99999;
        for (int ii = 0; ii < n; ii++){
            if (used[ii] == false && d[ii] < min1){
               // cout << ii;
                u = ii;
                min1 = d[ii];
            }
        }
       // cout << min1 << " *" << u << " "; 
        used[u] = true;

        
        for (int i = 0; i < G[u].size(); i++){
            int w = G[u][i].first;
            if (d[w] > d[u] + G[u][i].second){
                d[w] = d[u] + G[u][i].second;
                way[w] = u;
           }
        }
    }
    for (int i = 0; i < n; i++){
      if (i == end){
        if (d[i] != 100000){
          cout << d[i];
          break;
        } else {
          cout << -1;
          break;
        }
      }
    }
}

int main(){
    int n,m,from,to,w,f,s; 
    cin >> n >> s >> f;
    
    for (int i = 0; i < n; i++)
        d[i] = 100000;
    
    for (int i = 0; i < n; i++)
        used[i] = false;
    
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        cin >> m;
        if (m > -1){
          G[i].push_back({j,m});
        }
      }
    }
    
    dejkstra(s - 1,f - 1,n);
    
    //for (int i = 0; i < n; i++)
        //cout << d[i] << " ";
}
