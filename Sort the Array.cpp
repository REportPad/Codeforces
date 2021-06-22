#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> v;
    int cnt = 0;
    int l = -1, r = -1;
    
    for(int i=0; i < n; ++i){
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    for(int i=0; i < n-1; ++i){
        if((v[i] > v[i+1]) && l == -1){
            l = i;
        }
        else if(v[i] < v[i+1] && r == -1 && l > -1){
            r = i;
            break;
        }
    }
    
    if(v[n-2] > v[n-1]){
        r = n-1;
    }
    
    if(l == -1 && r == -1){
        cout << "yes" << endl;
        cout << 1 << ' ' << 1 << endl;
        return 0;
    }
    else{
        for(int i=0; i <= (r-l)/2; ++i){
            if(l+i != r-i){
                int temp = v[l+i];
                v[l+i] = v[r-i];
                v[r-i] = temp;
            }
        }
    }
    
    bool yes = true;
    for(int i=0; i < n-1; ++i){
        if(v[i] > v[i+1]){
            cout << "no" << endl;
            yes = false;
            break;
        }
    }
    
    if(yes){
        cout << "yes" << endl;
        cout << l+1 << ' ' << r+1 << endl;
    }
    
    return 0;
}
