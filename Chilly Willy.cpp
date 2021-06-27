#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    if(n <= 2){
      cout << -1 << endl;
    }
    else if(n == 3) cout << 210 << endl;
    else{//n >= 4
        string s[] = {"50", "80", "170", "20", "200", "110"};
        int m = n;
        int q = (n-4)%6;
        int ssize = s[q].size();
        
        string ans = "1";
        --m;
        
        while(m > ssize){
            ans += "0";
            --m;
        }
        
        for(int i=0; i < 6; ++i){
            if(n%6 == (4+i)%6){
                ans += s[i];
                break;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
