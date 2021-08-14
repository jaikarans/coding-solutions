#include <iostream>

using namespace std;

int main(){

    int n,x; cin >> n >> x;
    int a[n];
    int ans = 0;
    for (int i=0; i<n; i++){
        a[i] = i+1;
    }

    // -1 for left 1 for right 0 for same location
    int lorR = 0;
    int state = n-1;
    for (int i=0; i<n; i++){
        long long int y;
        for(int j=state; j>=0 && j<n; ){

            y = a[i] * a[j];
            if (y==x) {
                ans++;
                lorR = 0;
                state = j;
                break;
            }
            else if (y>x && a[i]*a[j-1]>=x){
                lorR = -1;
            }
            else if (y<x && a[i]*a[j+1]<x) {
                lorR = 1;
            }
            if ((y<x && !(a[i]*a[j+1] > x)) || (y<x &&  a[i]*a[j+1] > x) || (y>x &&  a[i]*a[j-1] < x)){
                lorR = 0;
                state = j;
                break;
            }
            j+=lorR;
        }
    }
    cout << ans;

    return 0;
}
