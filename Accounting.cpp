#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    
    if(a == 0){
        if(b > 0) cout << "No solution" << endl;
        else cout << 0 << endl;//0 0 10
        return 0;
    } 
    
    double da = a;
    if(a < 0) da = -da;
    
    double db = b;
    if(b < 0) db = -db;
    
    double dn = n;
    double x1 = db/da;
    double x2 = 1/dn;
    double x3 = pow(x1, x2);

    double x4 = ceil(x3);

    if(fabs(x3 - x4) < 0.001){
        if(a < 0 && b > 0) x4 = -x4;
        else if(a > 0 && b < 0) x4 = -x4;
        cout << x4 << endl;
    }
    else cout << "No solution" << endl;//0 1 2
    
    return 0;
}
