#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	cin >> n;
	long long int s = 1;
	long long int sum = 0;
	for(int i = 1; i <= n; i++){
		s *= i;
		sum += s;
	}
	cout << sum;
	return 0;
}
