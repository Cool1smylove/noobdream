#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	string a;
	cin >> a;
	for(int i = 0; i < a.length(); i++){
		if(a[i] == 'g' && a[i + 1] == 'z' && a[i + 2] == 'u'){
			i += 2;
			continue;
		}
		cout << a[i];
	}
	return 0;
}
