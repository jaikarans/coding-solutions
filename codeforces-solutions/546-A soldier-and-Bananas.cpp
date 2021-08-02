#include <iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	long int k,n,w;
	cin >> k >> n >> w;
	long int cost=0;
	for(int i=1; i<=w; i++){
		cost+=k*i;
	}
	if(cost-n>0)
	cout << cost-n << endl;
	else cout << 0 << endl;
	return 0;
}