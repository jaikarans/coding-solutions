#include <iostream>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string s;
	cin >> s;
	int len=s.length();
	int cap=0;
	for(int i=0; i<len; i++){
		if(s[i]>64 && s[i]<91) cap++;
	}
	if(cap>len-cap){
		for(int i=0; i<len; i++){
			if(s[i]>91) s[i]=s[i]-32;
			cout << s[i];
		}
	}
	else{
		for(int i=0; i<len; i++){
			if(s[i]<91) s[i]=s[i]+32;
			cout << s[i];
		}
	}
	return 0;
}