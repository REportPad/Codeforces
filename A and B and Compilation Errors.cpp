#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> a, b, c;
    for(int i=0; i < n; ++i){
        int t;
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    
    for(int i=0; i < n-1; ++i){
        int t;
        cin >> t;
        b.push_back(t);
    }
    sort(b.begin(), b.end());
    
    int cnt = 0;
    for(int i=0; i < n-1; ++i){
        if(a[i] != b[i]){
            cout << a[i] << endl;
            ++cnt;
            break;
        }
    }
    if(cnt == 0) cout << a[n-1] << endl;
    
    for(int i=0; i < n-2; ++i){
        int t;
        cin >> t;
        c.push_back(t);
    }
    sort(c.begin(), c.end());
    
    cnt = 0;
    for(int i=0; i < n-2; ++i){
        if(b[i] != c[i]){
            cout << b[i] << endl;
            ++cnt;
            break;
        }
    }
    
    if(cnt == 0) cout << b[n-2] << endl;

    return 0;
}
