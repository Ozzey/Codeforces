// https://codeforces.com/problemset/problem/1625/A

#include <bits/stdc++.h>

using namespace std;

void fn(){
    int n, l,m,flag_a=0,flag_b=0;
    cin >> n >> l;
    string temp;
    string new_Str;
    //char ptr_char;

    vector<string> str;
    for (int i = 0; i < n; i++) {
        cin >> m;
        temp = bitset<30>(m).to_string();
        temp= temp.substr(30-l,30);
        str.push_back(temp);
        //a.push_back(l);
    }

    for (int i = 0; i < l; i++) {
        for(int j=0;j<n;j++) {
            if(str[j][i]=='1'){flag_a++;}
            else{flag_b++;}
        }
        if(flag_a>flag_b){new_Str+='1';}
        else{new_Str+='0';}
        flag_a=0; flag_b=0;
    }
    int ot=stoi(new_Str,0,2);
    cout<<ot<<endl;
    //cout<<endl;
}

int main() {

    int t;
    cin>>t;

    while(t--) {
       fn();
    }
    return 0;
}
