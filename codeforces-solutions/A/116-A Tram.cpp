#include <iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin >> n;
	int sum=0,ans=0;
	int a[n][2];
	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			if(j%2==0)sum-=a[i][j];
			else sum+=a[i][j];
		}
		if(sum>ans) ans=sum;
	}
	cout << ans << endl;
	return 0;
}