#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	string a, b, c, d;
	cin >> a;
	int x = a.length();
	for(int i = 0; i < x; i++){
		if(a[i] >= 'a' && a[i] <= 'z'){
			b += a[i];
		}
		else if(a[i] >= 'A' && a[i] <= 'Z'){
			b += a[i];
		}
		else if(a[i] >= '0' && a[i] <= '9'){
			c += a[i];
		}
		else{
			d += a[i];
		}
	}
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	
	return 0;
} 
