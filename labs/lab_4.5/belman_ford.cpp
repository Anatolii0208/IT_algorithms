#include <iostream>
#include <vector>

using namespace std;
vector<vector<int> > graph;

int main()
{
    int n, m, x;
    cin >> n >> m;
    // x - start point
    x = 0;
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        a--;
        b--;
        graph.push_back({a, b, w});
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
        ans.push_back(30000);
    ans[x] = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto j : graph)
        {
            int a, b, w;
            a = j[0];
            b = j[1];
            w = j[2];
            ans[b] = min(ans[b], ans[a] + w);
        }
    }
    for (auto i : ans)
        cout << i << " ";
}