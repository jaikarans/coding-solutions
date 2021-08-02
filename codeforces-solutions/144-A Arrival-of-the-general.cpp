#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int min = 101;
    int max = 0;
    int max_index, min_index;

    for (int i=0; i<n; i++){
        cin >> a[i];
        if (min >= a[i]){
            min = a[i];
            min_index = i;
        }
        if (max <= a[i]){
            max = a[i];
            max_index = i;
        }
    }

    for(int i=0; i<n; i++){
        if (a[i] == max){
            max_index = i;
            break;
        }
    }

    if (max_index == min_index){
        cout << 0;
    }
    else if (max_index < min_index){
        cout << (((n-1)-min_index) + max_index);
    }
    else{
        cout << (((n-1)-min_index) + max_index-1);
    }
    return 0;
}