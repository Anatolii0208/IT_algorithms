#include <iostream> 
#include <cmath>
using namespace std;
long long BinMult(long long a, long long n, long long mod) {
 long long Res = 0; 
 while (n != 0) { 
  if (n % 2==0) { 
  a =(a+a)%mod; 
  n = n / 2; 
  } else { 
  Res =(Res+a)%mod; 
  n = n -1; 
  } 
  } 
  return Res; 
  } 
  long long BinPow(long long a, long long n, long long mod) { 
  long long Res = 1; 
  while (n != 0) { 
  if (n % 2==0) { 
  a =BinMult(a,a,mod);
  n = n / 2; 
  } else { 
  Res =BinMult(Res,a,mod);
  n = n -1; 
  } 
  } 
  return Res; 
  } 
  int main() { 
  long long a,n,k = 0; 
  cin >> a >> n >> k; 
  cout << BinPow(a,n,k); 
  }
