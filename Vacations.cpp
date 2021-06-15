#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> va;
    for(int i=0; i < n; ++i){
        int a;
        cin >> a;
        va.push_back(a);
    }

    int cnt = 0;
 
    if(va[0] == 0) ++cnt;
    for(int i=1; i < n; ++i){
        if(va[i] == 0) ++cnt;
        else{
            if(va[i] == 1 || va[i] == 2){
                if(va[i-1] == va[i]){ 
                    ++cnt;
                    va[i] = 0;
                }
            }
            else if(va[i] == 3){//va[1]=-va[0]+3
                if(va[i-1] == 1 || va[i-1] == 2) va[i] = -va[i-1] + 3;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
