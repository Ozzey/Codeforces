//https://codeforces.com/contest/1633/problem/A

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void fn(int n){
    n=n - n%10;

    for(int i=1; i<10;i++){
        if ((n+i)%7==0){
            cout<<n+i<<endl;
            break;
        }
    }


}

int main() {
    int t;
    int n;
    cin >> t;
    while(t--) {
        cin >> n;
        if (n%7==0){cout<<n<<endl;}
        else{
        fn(n);}
    }
}
