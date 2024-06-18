//spiralmatirxIILeetcode||InteriewBit   https://leetcode.com/problems/spiral-matrix-ii/
#include<iostream>
#include<algorithm>
#include<vector>
#include "funcs.h"
using namespace std;
void solve(vector<vector<int>>&v){
    int n=v.size();
    if (n==0)   return;
    int m=v[0].size();
    int indx_check=m*n;
    int i=0;    int j=0;    int s_index=0;  int cnt=1;
    while (s_index<n && s_index<m){
        i=s_index;  j=s_index;
        for (j=s_index;j<m-1;j++){
            v[i][j]=cnt;    cnt++;
        }
        for (i=s_index;i<n-1;i++){
            v[i][j]=cnt;    cnt++;
        }
        for (j=m-1;j>s_index;j--){
            v[i][j]=cnt;    cnt++;
        }
        for (i=n-1;i>s_index;i--){
            v[i][j]=cnt;    cnt++;
        }
    s_index++;  n--;    m--;
    }   
    
   if (cnt<=indx_check)    v[i][j]=cnt;    return;
}

vector<vector<int>>generateSquareMatrix(int A){
    int n=A;
    vector<vector<int>>v(n,vector<int>(n,0));
    solve(v);   return v;
}
int main(){
    int n;cin>>n;   int m;cin>>m;
    vector<vector<int>>v(n,vector<int>(m,0));
    solve(v);   print2dVector(v);
    v.clear();

}