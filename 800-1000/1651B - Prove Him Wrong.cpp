//https://codeforces.com/problemset/problem/1651/B

#include <iostream>
#define N 1e9

int main(){
    int t=0;
    std::cin>>t;

    while(t--){
        int n=0;
        std::cin>>n;
        long arr[n];
        arr[0]=1;
        int flag=0;
        for (int i = 1; i < n; ++i) {
            arr[i]=3*arr[i-1];
        }

        for (int i = 0; i < n-1; ++i) {
            if(arr[i]<3*arr[i+1] && arr[i+1]<N){
                flag++;
            }
            else{
                std::cout<<"NO"<<std::endl;
                flag=0;
                break;
            }
        }

        if(flag>0) {
            std::cout << "YES" << std::endl;
            for (int i = 0; i < n; ++i) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
    }
}
