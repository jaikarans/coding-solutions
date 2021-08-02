#include <iostream>
#include <bitset>
#include <vector>
#include <string>
#include <cmath>
using namespace std; 
int main(){
	int t; 
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n;
        int zero=n;
        string s = bitset<30>(n).to_string();
        int ans =0;
        int ones=0;
        for (int i=0; i<=29; i++){
            if (s[i]=='1') {
                ones=29-i;
                break;
            }
        
        }
        for (int i=0; i<ones; i++){
            ans+=pow(2,i);
            //cout << pow(2,i) << " ";
        }
        cout << ans << "\n";
        
        
    }
	return 0;
}	