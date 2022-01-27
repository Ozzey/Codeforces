#include <bits/stdc++.h>
using namespace std;


int fn(string str){
    sort(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}



int main(){
    int tc;
    string s;
    cin >> tc;
    int count=0;
    while(count<tc) {
        cin>>s;
        fn(s);
        count++;
    }
    return 0;
}
