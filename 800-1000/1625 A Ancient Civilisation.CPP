//NOT DONE

#include <bits/stdc++.h>
#include <iostream>


using namespace std;

#define ull unsigned long long int
//to binary converter

int toBinary(int N)
{

    // To store the binary number
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;

        // Count used to store exponent value
        cnt++;
    }

    return B_Number;
}


void fn(){
    long long n,l;
    cin>>n>>l;

    vector<ull>vec(n);
    vector<string>v(n);
    for (int i=0;i<n;i++) {
        cin >> vec[i];
        v[i]= to_string(toBinary(vec[i]));
        
    }
    for (auto &it : v)cout<< it<<endl;
}



int main(){
    int t;
    cin >> t;
    while(t--) {
        fn();
    }
    return 0;
}
