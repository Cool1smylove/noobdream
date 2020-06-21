#include <iostream>
#include <cstdio>
#include <string> 

using namespace std;

int main(){
	string a, b, c;
	cin >> a;
	
	int x = a.length();
	int y, z = 0;
	for(int i = 0; i < x; i++){
		if(a[i] < '0' || a[i] > '9'){
			b += a[i];
		}
		else{
			c += a[i];
		}
	}

	cout << b + c << endl;
	
	return 0;
}
