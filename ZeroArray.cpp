#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef unsigned long long ull;

int main(){
    int n;
    cin >> n;
    
    vector<int> v;
    ull sum = 0;
    for(int i=0; i < n; ++i){
        int a;
        cin >> a;
        
        sum += a;
        v.push_back(a);
    }
    
    if(sum%2 == 1) cout << "NO" << endl;
    else{
        sort(v.begin(), v.end());
        if(v.back() > sum-v.back() ){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
