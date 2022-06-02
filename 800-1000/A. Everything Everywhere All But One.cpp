//https://codeforces.com/problemset/problem/1686/A

#include <bits/stdc++.h>

int main() {
    int t;
    std::cin>>t;

    while(t--) {
        std::vector<int> a;
        int n;
        std::cin >> n;
        int iter = n;

        while (n--) {
            int items;
            std::cin >> items;
            a.push_back(items);
        }

        int sum=0;

        for (auto item:a) {
            sum+=item;
        }

        if(sum%iter!=0){std::cout<<"NO"<<std::endl;}

        else{
            int avg=sum/iter;
            if(std::find(a.begin(), a.end(), avg) != a.end()){std::cout<<"YES"<<std::endl;}
            else std::cout<<"NO"<<std::endl;
        }
    }

}
