#include <iostream>

using namespace std;

long long k;

long long pow(long long a, long long b)
{
  if (b == 0)
  {
    return 1;
  }
  if (b % 2 == 0)
  {
    return pow((a * a) % k, b / 2);
  }
  return (a * (pow(a, b - 1)) % k) % k;
}

int main()
{
  long long a, b;
  cin >> a >> b >> k;
  a %= k;
  cout << pow(a, b) % k;
}