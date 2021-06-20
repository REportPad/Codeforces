#include <iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i=0; i < n; ++i){
        string s;
        cin >> s;
        
        int len = s.size();
        if(len > 10){
            string ans = s[0] + (to_string(len-2)) + s[len-1];
            cout << ans << endl;
        }
        else{
            cout << s << endl;
        }
    }
    return 0;
}
