#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,i,s = 0;
    cin >> n;
    s = 0;
    if (n == 1) cout << 1;
    else{
    for (i=1;i*i<=n;i++)
    {
        if (n%i==0 && i * i!=n)
        {
            s += 2;
        }else if (i*i==n){
          s+=1;
        }
    }
    cout << s;
    }
    return 0;
}
