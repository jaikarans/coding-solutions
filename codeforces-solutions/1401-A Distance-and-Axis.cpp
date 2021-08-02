#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
class num{
	
public: 
	long int n;
	bool isOdd(){
		bool val=true;
		if(n%2==0)
			val=false;
		return val;
	}
	bool isEven(){
		bool val=true;
		if(n%2!=0)
			val=false;
		return val;
	}
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	num N,K;
	while(t--){
		long int n,k;
		cin >> n >>k;
		N.n=n;
		K.n=k;
		if(N.isEven()){
			if(K.n>=N.n){
				cout << k-n << endl;
				goto end;
			}
			else{
				if(K.isOdd()){
					cout << 1 << endl;
					goto end; 
				}
				else {
					cout << "0" << endl;
					goto end;
				}
			}
		}
		else {
			if(K.n>=N.n){
				cout << k-n << endl;
				goto end;
			}
			else{
				if(K.isEven()){
					cout << 1 << endl;
					goto end;
				}
				else{
					cout << "0" << endl;
					goto end;
				}
			}
		}
		end: ;

	}
	return 0;
}