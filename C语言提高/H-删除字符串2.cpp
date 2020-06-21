#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	string a;
	cin >> a;
	for(int i = 0; i < a.length(); i++){
		if((a[i] == 'g' || a[i] == 'G') 
			&& (a[i + 1] == 'z' || a[i + 1] == 'Z')
			&& (a[i + 2] == 'u' || a[i + 2] == 'U')){
			i += 2;
			continue;
		}
		cout << a[i];
	}
	return 0;
}
