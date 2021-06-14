#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,ta,tb,tc;
    cin >> n >> ta >> tb >> tc;
    
    int a = max(max(ta, tb), tc);
    int c = min(min(ta, tb), tc);
    int b;
  
    //sorting
    if(a == ta){
        if(c == tb) b = tc;
        else b = tb;
    }
    else if(a == tb){
        if(c == ta) b = tc;
        else b = ta;
    }
    else{//a=tc
        if(c == ta) b = tb;
        else b = ta;
    }
    
    //1. a=b=c
    if(a == b && b == c) cout << n/a << endl;
    else if(a == b){    //2. a=b
        int m = -1;
        for(int z=n/c; z >= 0; --z){
                if((n+(a-c)*z)%a == 0){
                int temp = (n+(a-c)*z)/a;
                if(temp > m) m = temp;
            }
        }
        cout << m << endl;
    }
    else if(b == c){ //3. b=c
        int m = -1;
        for(int x=n/a; x >= 0; --x){
            if((n+(b-a)*x)%b == 0){
                int temp = (n+(b-a)*x)/b;
                if(temp > m) m = temp;
            }
        }//for
        
        cout << m << endl;
    }
    else{    //4. a>b>c
    int m = -1;
        for(int x=n/a ; x >= 0; --x){
            for(int y=0; y <= n/b; ++y){
                int u = n + (c-a)*x + (c-b)*y;
                if(u%c == 0){
                    int temp = u/c;
                    if(temp > m) m = temp;
                    break;
                }
            }
        }
        
        cout << m << endl;
    }

    return 0;
}


