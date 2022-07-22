#include <iostream>
#include <cmath>

using namespace std;

bool prime(long long n) { 
	if (n == 1)
		return false;
	for(long long i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}

int main() {

	int n, x = 0;

	while (cin >> n) {
		if (n == 0) {
			cout << x;
			return 0;
		}
		if (prime(n))
			x++;
	}

	cout << x;
	return 0;

}