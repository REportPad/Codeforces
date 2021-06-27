#include <iostream>
#include<cmath>
using namespace std;

typedef long long ll;

int main(){
    ll r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    
    double d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    
    if(d == 0) cout << 0 << endl;
    else if(d <= 2*r) cout << 1 << endl;
    else{//d > 2*r
        ll cnt = d/r;
        double t = d - cnt*r;
        
        if(t < 0.0000001) cout << (cnt+1)/2 << endl;
        else cout << cnt/2 + 1 << endl;
    }
    
    return 0;
}
