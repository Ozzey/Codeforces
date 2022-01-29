// https://codeforces.com/contest/1624/problem/B

#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int fn(){
    long long a, b, c;
    cin >>a>>b>>c;

    if(a-b==b-c || a==b==c){
        cout<<"YES"<<endl;
    }

    else if((2*b-c)%a==0 && 2*b-c>0){
        cout<<"YES"<<endl;
    }

    else if( (a+c)%(2*b)==0 && a+c>0){
        cout<<"YES"<<endl;
    }

    else if((2*b-a)%c==0 && 2*b-a>0){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }

    return 0;
}



int main(){
    int t;
    cin >> t;
    while(t--) {
        fn();
    }
    return 0;
}
