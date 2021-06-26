#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;//~1e5
    
    vector<int> v;
    for(int i=0; i < n; ++i){
        int a;
        cin >> a;
        double b = a;
        
        int cnt = 0;
        while(1){
            b = a;
            if(floor(log2(b)) == log2(b)){
                v.push_back(1 + cnt);
                break;
            }
            else if(a%2 == 0){
                a /= 2;
            }
            else{//odd
                a = (a-1)/2;
                ++cnt;
            }
        }
    }
    
    sort(v.begin(), v.end());
    
    ll arr[37] = {0,};
    ll ans = 0;
    int j = 1;
    for(int i=0; i < n; ++i){
        if(v[i] == j){
            ++arr[j];
        }
        else{
          ++j;
          --i;
        }
    }
    
    for(int i=1; i <= j; ++i){
        ans += (arr[i]*(arr[i]-1)/2); 
    }
    
    cout << ans << endl;
    
    return 0;
}
