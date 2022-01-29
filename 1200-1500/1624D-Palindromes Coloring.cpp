// https://codeforces.com/problemset/problem/1624/D

#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int fn(){
    long long n,k;
    cin>>n>>k;
    string str;
    cin>>str;

    long long c[26];
    long long pairs , single,ans;

    pairs=single=ans=0;

    for(auto &item:c) item = 0;

    for(int i=0; i<n; i++) c[str[i]-97]++;


        for(int i=0; i<26; i++){
        pairs=pairs+c[i]/2;
        single=single+(c[i]%2);
    }

    ans+=(pairs/k)*2;
    single+=(pairs-(pairs/k)*k)*2;
    (single>=k ? ans++ : ans);

    cout<<ans<<endl;

}




int main(){
    int t;
    cin >> t;
    while(t--) {
        fn();
    }
    return 0;
}
