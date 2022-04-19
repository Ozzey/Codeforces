//https://codeforces.com/problemset/problem/1660/B

#include <bits/stdc++.h>

int main(){
    int t;
    std::cin>>t;

    while(t--) {
        int n;
        std::cin>>n;
        std::vector<int> vec;

        for (int i = 0; i < n; ++i) {
            int temp;
            std::cin>>temp;
            vec.push_back(temp);
        }

        if(n==1){
            if(vec[0]==1){ std::cout<<"YES"<<std::endl;}
            else{ std::cout<<"NO"<<std::endl;}
        }

        else {
            std::sort(vec.begin(), vec.end());
            std::reverse(vec.begin(),vec.end());

            if(vec[0] == vec[1]+1 || vec[0]==vec[1]){std::cout<<"YES"<<std::endl;}
            else{std::cout<<"NO"<<std::endl;}
        }
    }

}

