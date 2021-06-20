#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int sum = 0;
    int ans = -1;
    for(int i=0; i < n; ++i){
        int a, b;//a: exit, b: enter
        cin >> a >> b;
        sum += (b - a);
        ans = max(ans, sum);
    }
    cout << ans << endl;

    return 0;
}
