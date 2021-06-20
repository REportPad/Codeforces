#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    
    vector<int> vx;
    for(int i=0; i < n; ++i){
        int x;
        cin >> x;
        vx.push_back(x);
    }
    sort(vx.begin(), vx.end());
    
    int q;
    cin >> q;
    
    vector<int> vq;
    vector<int>::iterator low, up;
    
    for(int i=0; i < q; ++i){
        int tq;
        cin >> tq;

        low = lower_bound(vx.begin(), vx.end(), tq);
        up = upper_bound(vx.begin(), vx.end(), tq);
        int lpp = (low - vx.begin());
        int upp = (up - vx.begin());
        
        if(tq < vx[0]) cout << 0 << endl;
        else if(tq == vx[0]) cout << upp << endl;
        else if(tq >= vx.back()) cout << n << endl;
        else{
            if(upp-lpp <= 1){
                if(tq == vx[lpp]) cout << lpp+1 << endl;
                else cout << lpp << endl;
            }
            else{
                cout << (upp) << endl;
            }
        }
    }
    
    return 0;
}
