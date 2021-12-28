#include <iostream>
using namespace std;
int main(){
//	#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	char temp;
	for(int i=1; i<=k; i++){
		for(int j=0; j<n; j++){
			if(j+1<n){
			    if(s[j]=='B' && s[j+1]=='G'){
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
				j++;
				
			}
			}
		}
	}
	for(int i=0; i<n; i++){
		cout << s[i];
	}
	return 0;
}