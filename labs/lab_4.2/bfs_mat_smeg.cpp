#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,s,f;
    cin >> n >> s >> f;

    s--;
    f--;

    vector <int> colors(n, 0);
    vector <int> p(n, -1);
    vector <int> d(n, -1);
    vector <vector<int> > graph(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int schet;
            cin >> schet;
            graph[i].push_back(schet);
        }
    }

    /*for (auto i : graph)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }*/

    colors[s] = 1;
    d[s] = 0;
    p[s] = -1;
    
    queue <int> Q;
    Q.push(s);

    while (!Q.empty())
    {
        int u = Q.front();
        for (int i = 0; i < graph[u].size(); i++)
        {
            if (colors[i] == 0 && graph[u][i])
            {
                colors[i] = 1;
                d[i] = d[u] + 1;
                p[i] = u;
                Q.push(i);
            }
        }
        colors[u] = 2;
        Q.pop();
    }
    
    //cout << endl << '*' << d[f] << '*' << endl;

    /*for (auto i : d)
        cout << i << " ";

    cout << endl;

    for (auto i : p)
        cout << i << " ";*/
    if (d[f] == -1)
        cout << 0;
    else 
        cout << d[f];

    return 0;
}