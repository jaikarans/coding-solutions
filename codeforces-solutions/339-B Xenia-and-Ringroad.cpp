#include <iostream>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int a[m+1];
    a[0]=1;
    long long int ans=0;
    for (int i=1; i<m+1; i++){
        cin >> a[i];
        if(a[i] < a[i-1]){
            ans+=n-(a[i-1]-a[i]);
        }
        else {
            ans+=a[i]-a[i-1];
        }
    }
    cout << ans;
    return 0;
}