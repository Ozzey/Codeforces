//https://codeforces.com/contest/1633/problem/B

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void fn(){
    string str;
    cin >> str;

    int f1=0;
    int f0=0;
    for(int i =0; i<str.length(); i++){
        if(str[i]=='0'){
            f0++;
        }
        else if(str[i]=='1'){
            f1++;}
    }

//    cout<<f1<<endl;
//    cout<<f0<<endl;
    if(f0==f1){
        cout<<0<<endl;
    }
    else if(f1>f0){cout<<f0<<endl;}
    else if(f1<f0){cout<<f1<<endl;}
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        fn();
    }
}
