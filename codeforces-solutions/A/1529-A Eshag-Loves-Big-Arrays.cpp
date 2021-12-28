#include <iostream>

using namespace std; 
int main(){
	int t; 
    cin >> t;
    while(t--){
        int n; cin >> n;
        int min=101; 
        int a[n];
        int count=0;
        for (int i=0; i<n; i++){
            cin >> a[i];
            if (a[i]<min) min = a[i];
        }
        for (int i=0; i<n; i++){
            if(a[i]==min) count++;
        }
        cout << n-count << "\n";
    }
	return 0;
}	