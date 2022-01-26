#include <bits/stdc++.h>
using namespace std;

int in_row(vector <vector<char>> vec, int m,int r) {
    int res;
    for (int i = 0; i < m; i++) {
        if (vec[r-1][i] == 'B') {
            res++;
            break;
        }
    }
    return res;
}

bool in_col(vector <vector<char>> vec, int n,int c) {
    int res;
    for (int i = 0; i < n; i++) {
        if (vec[i][c-1] == 'B') {
            res++;
            break;
        }
    }
    return res;
}

int fn(vector <vector<char>> vec,int n,int m,int r,int c){

    int no;

    if(vec[r-1][c-1]=='B'){
        no=0;
    }

    else if(in_row(vec,m,r) >0){
        no=1;
    }

    else if(in_col(vec,n,c) >0){
        no=1;
    }

    else{
        no=2;
    }

    return no;
}



int main(){
    int tc;
    cin>>tc;
    int n,m,r,c;
    //cin >> tc;
    int count=0;
    while(count<tc) {

        cin >> n >> m >> r >> c;
        int flag=0;
        vector<vector<char>> vec;
        for (int i = 0; i < n; i++) {
            vector<char> temp;
            for (int j = 0; j < m; j++) {
                char val;
                cin >> val;
                temp.push_back(val);
                if(val=='B'){flag++;}
            }
            vec.push_back(temp);
        }

        if(flag>0){
            cout<<fn(vec,n,m,r,c)<<endl;
        }
        else{
            cout<<-1<<endl;
        }

        count++;
    }
    return 0;
}
