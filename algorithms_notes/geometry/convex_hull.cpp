#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;

struct Point
{
    int x, y;
};

typedef vector<Point> Points;
Points P;
stack<Point> Up, Down;

bool cmp(Point A, Point B)
{
    if (A.x == B.x)
        return A.y < B.y;
    return A.x < B.x;
}

int PointPosition(Point A, Point B, Point C)
{
    int S = (A.y + B.y) * (B.x - A.x) +
            (B.y + C.y) * (C.x - B.x) +
            (A.y + C.y) * (A.x - C.x);
    if (S > 0)
        return 1;
    else if (S < 0)
        return 0;
    else
        return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        Point TT;
        TT.x = a;
        TT.y = b;
        P.push_back(TT);
    }
    sort(P.begin(), P.end(), cmp);
    Point A = P[0], B = P[P.size() - 1];
    Up.push(B);
    Down.push(B);
    Up.push(A);
    Down.push(A);
    Point UpLast1 = A, UpLast2 = B, DownLast1 = A, DownLast2 = B;
    for (int i = 1; i < n - 1; i++)
    {
        if (PointPosition(B, A, P[i]) > 0)
        {
            // UP
            if (PointPosition(UpLast2, UpLast1, P[i]) > 0)
            {
                // OK
                Up.push(P[i]);
                UpLast2 = UpLast1;
                UpLast1 = P[i];
            }
            else
            {
                while (PointPosition(UpLast2, UpLast1, P[i]) < 0)
                {
                    Up.pop();
                    UpLast1 = UpLast2;
                    Up.pop();
                    UpLast2 = Up.top();
                    Up.push(UpLast1);
                }
                Up.push(P[i]);
                UpLast2 = UpLast1;
                UpLast1 = P[i];
            }
        }
        else
        {
            // Down
            if (PointPosition(DownLast2, DownLast1, P[i]) < 0)
            {
                // OK
                Down.push(P[i]);
                DownLast2 = DownLast1;
                DownLast1 = P[i];
            }
            else
            {
                while (PointPosition(DownLast2, DownLast1, P[i]) > 0)
                {
                    Down.pop();
                    DownLast1 = DownLast2;
                    Down.pop();
                    DownLast2 = Down.top();
                    Down.push(DownLast1);
                }
                Down.push(P[i]);
                DownLast2 = DownLast1;
                DownLast1 = P[i];
            }
        }
        i++;
    }
    cout << "UP" << endl;
    while (!Up.empty())
    {
        cout << Up.top().x << " " << Up.top().y << " " << '|' << " ";
        Up.pop();
    }
    cout << "\n"
         << "DOWN" << endl;
    while (!Down.empty())
    {
        cout << Down.top().x << " " << Down.top().y << " " << '|' << " ";
        Down.pop();
    }
}

/*
11
1 2
2 2
2 3
2 4
3 1
3 2
3 3
3 4
4 2
4 3
7 2
*/