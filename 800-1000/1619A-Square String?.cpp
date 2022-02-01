#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
https://codeforces.com/problemset/problem/1619/A

#include <bits/stdc++.h>
using namespace std;


bool is_sym(string str){
    int mid= str.length()/2;
    int flag=0;
    for(int i=0; i<str.length()/2; i++){
        if (str[i]==str[mid+i]){
            flag++;
        }
    }

    if(flag==str.length()/2){
        return true;}

    else{return false;}
}

void fn(){
    string str;
    cin >> str;

    if(str.length()%2==0 && is_sym(str)){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        fn();
    }
}
