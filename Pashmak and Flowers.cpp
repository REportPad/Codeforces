#include <iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ll n;
    cin >> n;
    
    ll cntMax = 0;
    ll cntMin = 0;
    ll valMin = 1e10;
    ll valMax = -1;
    
    for(int i=0; i < n; ++i){
        int a;
        cin >> a;
        
        if(valMin > a){
            if((cntMax == 0) && (valMin <= 1e9)){
                cntMax = cntMin;
                valMax = valMin;
            }
            
            cntMin = 1;
            valMin = a;
        }
        else if(valMin == a){
            ++cntMin;
        }
        else if(valMax < a){
            cntMax = 1;
            valMax = a;
        }
        else if(valMax == a){
            ++cntMax;
        }
    }
    
    
    ll ans = cntMax * cntMin;
    if(valMax - valMin == 0 || valMax < valMin){
        cout << 0 << ' ' << n*(n-1)/2 << endl;
    }
    else cout << valMax - valMin << ' ' << ans << endl;
    
    return 0;
}
