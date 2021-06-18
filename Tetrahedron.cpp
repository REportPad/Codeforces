#include <iostream>
#include <math.h>
using namespace std;

typedef unsigned long long ull;

#define P 1000000007

int main(){
    int n;
    cin >> n;
    
    if(n == 1) cout << 0 << endl;
    else if(n == 2) cout << 3 << endl;
    else if(n == 3) cout << 6 << endl;
    else{
        ull y0, y1;
        if(n%2 == 0){
            y0 = 3;
            y1;
            for(int i=0; i < n/2-1; ++i){
                y1 = (9*y0 - 6)%P;
                y0 = y1;
            }
        }
        else{
            y0 = 6;
            y1;
            for(int i=0; i < n/2-1; ++i){
                y1 = (9*y0 + 6)%P;
                y0 = y1;
            }
        }
        
        cout << y1 << endl;
    }
    
    return 0;
}
