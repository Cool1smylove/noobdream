#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char s[101];
	gets(s);
	int len = strlen(s);
	for(int i = 0; i < len; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 3;
			if(s[i] > 'Z'){
				s[i] -= 26;
			}
		}
		else if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] += 3;
			if(s[i] > 'z'){
				s[i] -= 26;
			}
		}
		else{
			continue;
		}
	}
	puts(s);
	return 0;
} 
