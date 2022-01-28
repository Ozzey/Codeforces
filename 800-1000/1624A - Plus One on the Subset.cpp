//https://codeforces.com/problemset/problem/1624/A

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int fn(){
    int n;
    cin >> n;
    vector<int>vec(n);
    for (auto &it : vec)cin>>it;
    int max = *max_element(vec.begin(), vec.end());
    int min = *min_element(vec.begin(), vec.end());

    int count = max-min;
    cout<<count<<endl;
}



int main(){
    int t,n;
    cin >> t;
    while(t--) {
        fn();
    }
    return 0;
}
