#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string s1, s2;
		cin >> s1 >> s2;
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		cout << (s1 == s2 ? "Yes" : "No") << endl;
	}
	return 0;
} 
