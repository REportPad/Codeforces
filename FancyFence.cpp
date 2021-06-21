#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int i=0; i < t; ++i){
        int a;
        cin >> a;
        
        if(a >= 180 || a < 60) cout << "NO" << endl;
        else{
            double aa = a;
            double xd = 360/(180-aa);
            int xi = 360/(180-aa);

            if(xd == xi) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}
