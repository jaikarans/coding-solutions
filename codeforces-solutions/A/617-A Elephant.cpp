#include <iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin >> n;
	int a=0,count=0;
	while(a<n){
		a+=5;
		count++;
	}
	cout << count ;
	return 0;
}