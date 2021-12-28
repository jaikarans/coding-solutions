#include <iostream>
using namespace std; 
int main(){
	int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int a[n];
        bool shorted = true;
        cin >> a[0];
        for (int i=1; i<n; i++){
            cin >> a[i];
            if (a[i]!=a[i-1]+1) {shorted=false;}
        }
        
        if (shorted==true) {
            cout << "0\n";
        }
        else {
            if (a[0]==n && a[n-1]==1) cout << "3\n";
            else if ((a[0]!=1 && a[n-1]!=n)) cout << "2\n";
            else cout << "1\n";
        }
        
    }
	return 0;
}	