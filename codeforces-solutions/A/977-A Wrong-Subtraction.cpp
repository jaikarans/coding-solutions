#include <iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	long int n;
	int k;

	cin >> n >> k;
	while(k>0){
		if(n%10!=0){
			n-=1;
			
		}
		else {
			n/=10;
		}
		k--;
	}
	cout << n ;
	return 0;
}