#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    
    if(n == 1){
      cout << 1 << endl;
      return 0;
    }
    
    vector<int> h;
    int sum1 = 0;
    int sum2 = 999;
    int j=1;
    for(int i=0; i < n; ++i){
        int a;
        cin >> a;
        h.push_back(a);
        
        if(i >= k){
            sum1 += (a - h[i-k]);
            if(sum1 < sum2){
                sum2 = sum1;
                j = (i+1)-k+1;
            }
        }
        else{
            sum1 += a;
            sum2 = sum1;
        }
    }
    
    cout << j << endl;
    
    return 0;
}
