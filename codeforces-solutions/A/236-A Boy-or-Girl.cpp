#include <iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string s;
	cin >> s;
	int count=0;
	for(int i=0; i<s.length(); i++){
		for(int j=0; j<s.length(); j++){
			if(s[i]==s[j] && i!=j){
				s[j]='!';
				//cout << s << endl;
			}
			else continue;
		}	
	}
	for(int i=0; i<s.length(); i++){
		if(s[i]!='!') count++;
	}
	if(count%2==0) cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;
	return 0;
}