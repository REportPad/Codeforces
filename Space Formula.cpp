#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> vi;

int main(){
    int n, d;
    cin >> n >> d;
    
    vi s;
    vi p;
    for(int i=0; i < n; ++i){
        int t1;
        cin >> t1;
        s.push_back(t1);
    }
    
    for(int i=0; i < n; ++i){
        int t1;
        cin >> t1;
        p.push_back(t1);
    }
    
    //trivial
    if(d == 1){
        cout << 1 << endl;
        return 0;
    }
    
    s[d-1] += p[0];
    int maxValueIdx = -1;
    for(int i=d-2; i >= 0; --i){
        if(s[i] > s[d-1]){
            maxValueIdx = i;
            break;
        }
    }
    
    if(maxValueIdx == -1){
        int cnt = 0;
        for(int i=0; i < d-1; ++i){
            if((s[i]+p[n-1 - i] > s[d-1])) ++cnt;
        }
        
        for(int i=d; i < n; ++i){
            if((s[i]+p[n-1 - i] > s[d-1])) ++cnt;
        }
        
        cout << cnt+1 << endl;
        return 0;
    }
    
    for(int i=0; i <= maxValueIdx; ++i){
        s[i] += p[i+1];
    }
    
    int idx2 = -1;
    for(int i=maxValueIdx+1; i < d-1; ++i){
        s[i] += p[(n-1) - (i-(maxValueIdx+1))];
        idx2 = (n-1) - (i- (maxValueIdx+1));
    }
    
    for(int i=d; i < n; ++i){
        s[i] += p[(idx2-1) - (i-d)];
    }
    
    int ans = (maxValueIdx+1)+1;
    for(int i=maxValueIdx+1; i < n; ++i){
        if(s[d-1] < s[i]){
            ++ans;
        }
    }
    
    cout << ans << endl;
    return 0;
}
