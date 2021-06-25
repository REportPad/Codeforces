#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

typedef vector<int> vi;

int gcd(int a, int b){
    int x = max(a,b);
    int y = min(a,b);
    int r = x%y;
    
    while(r > 1){
        x = y;
        y = r;
        r = x%y;
    }
    
    if(r == 0) return y;
    return r;
}

int main(){
    int n, m;
    cin >> n >> m;
    
    
    vi p;
    vi q;
    for(int i=0;i <= n; ++i){
        int t;
        cin >> t;
        p.push_back(t);
    }
    
    for(int i=0;i <= m; ++i){
        int t;
        cin >> t;
        q.push_back(t);
    }
    
    if(n > m){
        int x = p[0]*q[0];
        if(x > 0) cout << "Infinity" << endl;
        else cout << "-Infinity" << endl;
    }
    else if(n < m){
        cout << "0/1" << endl;
    }
    else{
        int g = gcd(abs(p[0]), abs(q[0]));
        int x = p[0]/g;
        int y = q[0]/g;
        
        if(y < 0) x = -x;
        
        cout << x << "/" << abs(y) << endl;
    }
    
    return 0;
}
