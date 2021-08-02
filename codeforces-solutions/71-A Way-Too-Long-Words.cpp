#include <iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.length();
		if(n>10){
			cout << s[0] << n-2 << s[n-1] << endl;
		}
		else cout << s << endl;
	}
	return 0;
}