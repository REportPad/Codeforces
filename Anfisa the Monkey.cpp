#include <iostream>
#include<string>

using namespace std;

int main(){
    int k, a, b;//1~100
    cin >> k >> a >> b;
    
    string s;
    cin >> s;
    
    int n = s.size();
    
    if(n > k*b || n < a || k > n*a || k > (n/a)){
        cout << "No solution" << endl;
        return 0;
    }
    
    if(n < b){
        b = n;
    }
    
    if(n%a == 0 && n/a == k){
        for(int j=0; j < k; ++j){
            string t = s.substr(j*a, a);
            cout << t << endl;
        }
    }
    else if(n%b == 0  && n/b == k){
        for(int j=0; j < k; ++j){
            string t = s.substr(j*b, b);
            cout << t << endl;
        }
    }
    else{
        int y = (n/b)*b;
        int z = n - y;
        
        if(z < a){
            int B = 1;
            int v;
            int cnt1 = 0;
            int cnt2 = 0;
            while(1){
                y = (n/b - B)*b;
                z = n - y;
                v = k - (n/b - B);
                if(z/a >= v) break;
                ++B;
            }
            
            for(int j=0; j < n/b-B; ++j){
                string t = s.substr(j*b, b);
                cout << t << endl;
                ++cnt1;
            }
            
            for(int j=0; j < v-1; ++j){//6
                string t = s.substr(j*a +(cnt1*b), a);
                cout << t << endl;
                ++cnt2;
            }
            
            int u = n - cnt1*b - cnt2*a;
            string t = s.substr(n-u, u);
            cout << t << endl;
        }
        else{
            int nb = n/b;
            int m = 0;
            
            while((z/a) + (nb - m) < k){
                ++m;
                y = (nb - m)*b;
                z = n - y;
            }
            
            int cnt1 = 0;
            for(int j=0; j < nb - m; ++j){
                string t = s.substr(j*b, b);
                cout << t << endl;
                ++cnt1;
            }
            
            int cnt2 = 0;
            for(int j=0; j < z/a-1; ++j){
                string t = s.substr(j*a +cnt1*b, a);
                cout << t << endl;
                ++cnt2;
            }
            
            int u = n - cnt1*b - cnt2*a;
            string t = s.substr(n - u, u);
            cout << t << endl;
        }
    }
    
    return 0;
}
