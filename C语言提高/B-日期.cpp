#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int dayNum[13] = {0, 31, 29, 31, 30, 31, 30, 
					 31, 31, 30, 31, 30, 31}; 
string week[7] = {"Thursday", "Friday", "Saturday", 
		"Sunday", "Monday", "Tuesday", "Wednesday"};
					 
int main(){
	int month, day;
	int x = 0;
	
	cin >> month;
	cin >> day;
	
	if(month == 4){
		x = day - 12;
	}
	else{
		x += 18;
		for(int i = month - 1; i > 4; i--){
			x += dayNum[i];
		}
		x += day;
	}
	
	int wk;
	wk = x % 7;
	cout << week[wk] << endl;	
	
	return 0;
}
