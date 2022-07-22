#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point
{
    int x, y;
};

int PointPosition(Point A, Point B, Point C)
{
    int S = (A.y + B.y) * (B.x - A.x) +
            (B.y + C.y) * (C.x - B.x) +
            (A.y + C.y) * (A.x - C.x);

    // S > 0 над прямой, S < 0 под прямой, S == 0 на прямой
    if (S > 0)
        return 1;
    else if (S < 0)
        return 0;
    else
        return -1;
}

int main()
{
}