#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	double D, X, Y ,T;
	while(cin >> D >> X >> Y >> T){
		if(D / Y > D / X + T){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
} 
