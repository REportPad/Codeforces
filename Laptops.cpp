#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef struct _laptop{
    int price;
    int quality;
}laptop;

bool comp(laptop a, laptop b){
    if(a.price == b.price) a.quality < b.quality;
    return a.price < b.price;
}

int main(){
    int n;
    cin >> n;
    
    vector<laptop> v;
    for(int i=0; i < n; ++i){
        int a, b;
        cin >> a >> b;
        
        laptop lt;
        lt.price = a;
        lt.quality = b;

        v.push_back(lt);
    }
    
    sort(v.begin(), v.end(), comp);
    bool poor = true;
    for(int i=0; i < n-1; ++i){
        if((v[i].price < v[i+1].price) && (v[i].quality > v[i+1].quality)){
            cout << "Happy Alex" << endl;
            poor = false;
            break;
        }
    }
    
    if(poor) cout << "Poor Alex" << endl;
    
    return 0;
}
