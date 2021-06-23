#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef long long ll;

int main(){
    //input
    ll n, m;
    cin >> n >> m;
    
    //processing
    ll kmin = 0, kmax = 0;
    ll x = n/m;
    ll y = n%m;
    
    //output
    kmax = (n-m+1)*(n-m)/2;
    if(y == 0){
        kmin = m*((n/m)*(n/m-1)/2);
    }
    else{//y > 0
        kmin += y*((x+1)*x/2);
        kmin += (m-y) * (x*(x-1)/2);
    }

    cout << kmin << ' ' << kmax << endl;
    
    return 0;
}
