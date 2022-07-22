#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cyclic (int v, int &cycle_st, vector <int> *graph, vector <int> &color ) { //проверка графа на цикличность
    color[v] = 1;
    for (size_t i = 0; i < graph[v].size(); ++i) {
        int to = graph[v][i];
        if (color[to] == 0) { //если в вершину не входили ни разу
            if (cyclic (to, cycle_st, graph,  color))  return true;
        }
        else if (color[to] == 1) { //если в указанную вершину ранее входили, то значит, что найден цикл
            cycle_st = to; // и меняем значение индикатора 
            return true; 
        }
    }
    color[v] = 2; //указываем, что в вершину больше ни разу входить не будем
    return false;
}

void dfs (int v, vector <int> *graph, vector<bool> &used, vector <int> &answer) {
    used[v] = true; //указываем, что использовали данную вершину
    for (int i=0; i < graph[v].size(); i++) {
        int to = graph[v][i]; //по списку проходим по всем вершинам, к которым можно пройти от вершины v
        if (!used[to])//и если вершину не рассматривали, то применяем алгоритм поиска в глубину для неё
            dfs (to, graph, used, answer);
    }
    
}

int main()
{
    int n; // число вершин и ребер
    cin >> n;
    int a, b;
    vector <int> graph[100001]; // граф
    vector <bool> used (n);
    vector<int> answer;
    vector<int> color (n,0); //массив, хранящий кол-во посещений для данной вершины.
    int cycle_st = -1;
    for (int j = 0; j < n; j++)
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a == 1)
                graph[j].push_back(j);
        }
    for (int i = 0; i < n; i++)
    {
        if (cyclic(i, cycle_st, graph, color)) //проверка графа на ацикличность
            break;
    }
    if (cycle_st != -1)
    { 
        //cout << "1";
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++) 
        used[i] = false;
    int c = 0;
    for (int i = 0; i < n; i++)
        if (!used[i]) {
        dfs (i, graph, used, answer);
        //cout << endl;
        c++;
    }
    if (c > 1)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}