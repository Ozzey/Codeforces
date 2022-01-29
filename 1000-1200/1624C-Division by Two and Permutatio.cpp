// https://codeforces.com/problemset/problem/1624/C

#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

bool distinct(vector<int>v){
    int n = v.size();
    // Put all array elements in a map
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(v[i]);
    }
    // If all elements are distinct, size of
    // set should be same array.
    if (s.size() == v.size()){
        return true;
    }
    else{
        return false;
    }
}

vector<int> find_dup(vector <int> vec){
    vector<int>v;
    if (vec.size()>2){
        for(int i=0;i<vec.size();i++){
            for(int j=i+1;j<vec.size(); j++){
                if (vec[i]==vec[j]){
                    v.push_back(vec[i]);
                }
            }
        }
        return v;}

    else{return vec;}
}

void fn(int n, vector<int> v){
    int flag=0;
    if (distinct(v)) {
        for (int i = 0; i < v.size(); i++) {
            while (v[i] > n) {floor(v[i] =v[i]/2);}
        }
    }


    else {
        vector<int> v1 = find_dup(v);
        //for (auto item: v1) cout<<item;}
        for (auto i = v.begin(); i != v.end(); ++i) {
            for(int j=0;j<v1.size();j++) {
                if (*i == v1[j]) {
                    v.erase(i);
                    i--;
                }
            }
        }


        for (int i = 0; i < v.size(); i++) {
            while (v[i] > n) {floor(v[i] = v[i]/2);}
        }

        int tc;
        for (int i = 0; i < v1.size(); i++) {
            tc=v1.size()-i-1;
            while (v1[i] > n) {
                v1[i] = floor(v1[i] / 2);
            }

            while (tc > 0) {
                v1[i] = floor(v1[i] / 2);

                tc--;
            }
            //cout<<v1[i]<<endl;
            v.push_back(v1[i]);
        }

   }

    for (auto item: v){
        if (item==0){flag++;};
    }

    if (distinct(v) && flag<1) {
        cout << "YES" << endl;
    }
    else if(v.size()==0){
        cout << "NO" << endl;
    }
    else {
        cout << "NO" << endl;
    }


}




int main(){
    int t;
    cin >> t;
    while(t--) {
        int n,temp;
        cin>>n;
        vector<int> v;
        for (int i=0;i<n;i++) {
            cin >> temp;
            v.push_back(temp);
        }

        if(n==1 && v[0]==1){cout<<"YES"<<endl;}
        else{fn(n,v);}
    }
    return 0;
}
