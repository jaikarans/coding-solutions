#include <iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	 string s;
	 cin >> s;
	 int n;
	 n=s.length();
	 int temp;
	 for(int i=0; i<n; i+=2){
	 	for(int j=0; j<n; j+=2){
	 		if (s[i]<s[j]){
	 			temp=s[i];
	 			s[i]=s[j];
	 			s[j]=temp;
	 		}
	 	}
	 }
	 for(int i=0; i<n; i++){
	 	cout << s[i];
	 }
	 return 0;
}