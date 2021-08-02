#include <iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int a,b;
	cin >> a >> b;
	int count=0;
	//const int ia=a,ib=b;
	//int i=a;
	//int j=b;
	while(a<=b){
	    a*=3;
		b*=2;
		count++;
	}
	//if(ia==ib)
	 //   cout << 1 ;
	cout << count ;
	return 0;
}