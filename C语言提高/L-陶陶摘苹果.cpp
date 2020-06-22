#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int a[10];
	int n;
	for(int i = 0; i < 10; i++){
		cin >> a[i];
	}
	cin >> n;
	int count = 0;
	for(int i = 0; i < 10; i++){
		if(a[i] <= n + 30){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
