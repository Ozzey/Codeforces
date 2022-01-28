// https://codeforces.com/problemset/problem/1622/A

#include <bits/stdc++.h>
using namespace std;


int main(){
    int tc;
    cin >> tc;
    int l1,l2,l3;
    int i=0;

    while(i < tc){
        cin>>l1>>l2>>l3;

        if(abs(l1-l2)==l3 || abs(l1-l3)==l2 || abs(l2-l3)==l1)
            cout<<"yes"<<endl;
        else if(l1%2==0 && l2==l3 || l2%2==0 && l1==l3 || l3%2==0 && l1==l2)
            cout << "yes"<<endl;
        else {
            cout << "no"<<endl;
        }
        i++;
        }

    return 0;

}
