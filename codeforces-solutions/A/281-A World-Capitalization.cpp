#include <iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string t;
	cin >> t;
	if (t[0]>90) t[0] = t[0]-32;
	cout << t;
	return 0;
}