#include <iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int a[5][5];
	int i1,j1;
	int count=0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin >> a[i][j];
			if(a[i][j]==1){
				i1=i;
				j1=j;
			}
		}
	}
	if(i1==2){
		if(j1>2) count+=j1-2;
		else count+=2-j1;
	}
	else if(i1>2){
		if(j1>2) count+=j1-2+i1-2;
		else count+=2-j1+i1-2;
	}
	else if(i1<2){
		if(j1>2) count+=j1-2+2-i1;
		else count+=2-j1+2-i1;
	}
	else if(j1==2){
		if(i1>2) count+=i1-2;
		else count+=2-i1;
	}
	else if(j1>2){
		if(i1>2) count+=i1-2+j1-2;
		else count+=2-i1+j1-2;
	}
	else if(j1<2){
		if(i1>2) count+=i1-2+2-j1;
		else count+=2-i1+2-j1;
	}
	else count;
	cout << count << endl;
	return 0;
}