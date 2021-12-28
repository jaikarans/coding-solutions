#include <iostream>
#include <vector>

using namespace std;
int main(){

    int s, n;
    cin >> s >> n;
    vector<vector<int> > v;
    int x,y;
    long long int total_x, max_s;
    max_s = s;
    for (int i=0; i<n; i++){
        cin >> x >> y;
        total_x+=x;
        if (x < max_s ) {
            max_s+=y;
        }
        else{
            v.push_back({x,y});

        }

    }

    if (v.size() != 0){
        for (int i=0; i<v.size(); i++){
            for (int j=0; j<v.size(); j++){
                if (v[j][0] < max_s){
                    max_s+=v[j][1];
                    v[j] = {0,0};
                }
            }
        }
        for (auto &itt: v){
            if(itt[0] > 0){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

    return 0;
};
