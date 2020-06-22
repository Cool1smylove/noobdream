#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int a, b, c, d;
	while(cin >> a >> b >> c >> d){
		int xy = (a * a - b) / 2;
		if(a * b - c == a * xy && b * b == d + 2 * xy * xy){
			cout << "Y" << endl;
		}
		else{
			cout << "N" << endl;
		}
	}
	return 0;
}
