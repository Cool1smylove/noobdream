#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	int a[20][20];
	while(cin >> n){
		if(n == 0){
			break;
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j <= i; j++){
				if(j == 0 || i == j){
					a[i][j] = 1;
				}
				else{
					a[i][j] = a[i-1][j]+a[i-1][j-1];
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j <= i; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
