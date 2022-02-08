// https://codeforces.com/problemset/problem/1632/A 

#include <bits/stdc++.h>
using namespace std;

void fn(){
    int n;
    cin>>n;
    string s,a,b;
    cin>>s;

    if(n==1){cout<<"YES"<<endl;}

    else if(n==2){
        if (s[0]==s[1]){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
    }

    else{cout<<"NO"<<endl;}
}

int main() {
    int t;
    cin>>t;
    while(t--){
        fn();
    }
}
