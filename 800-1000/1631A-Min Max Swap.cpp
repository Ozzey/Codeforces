
// https://codeforces.com/problemset/problem/1631/A

#include <bits/stdc++.h>
using namespace std;

int fn(){
    int n;
    cin>>n;
    int item ,max_a,max_b,pa,pb;
    int count=n;
    vector<int>a,b;
    while(count--){cin>>item;a.push_back(item);}
    count=n;
    while(count--){cin>>item;b.push_back(item);}

    for(int i=0 ; i<n; i++){
        pa=a[i]; //pb=b[i];
        if(a[i]<b[i]){a[i]=b[i];b[i]=pa;}
    }

    max_a = *max_element(a.begin(), a.end());
    max_b = *max_element(b.begin(), b.end());
    
    return max_a*max_b;
    //for (auto item:a) {cout<<item<<" ";}
}

int main() {
    int t;
    cin>>t;
    while(t--){
        cout<<fn()<<endl;
    }
}
