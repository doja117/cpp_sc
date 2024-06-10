#include<vector>
#include<climits>
#include<iostream>
using namespace std;
int returnMax1s(vector<vector<int>>v){
    if (v.size()==0)    return 0;
    int n=v.size(); int m=v[0].size();
    int i=0;    int j=n-1;
    int ans=INT_MAX;
    while (i<m && j>=0){
        if (v[i][j]==1) {
            j--;    ans=i;
        } else {
            i++;
        }
    }   return ans;
}
void print2dVector(vector<vector<int>>v){
    for (auto x:v){for (auto y:x){cout<<y<<"\t";}cout<<"\n";}
}
vector<int>takeInputVector(int n){
    vector<int>ans; for (int i=0;i<n;i++){int x;cin>>x;ans.push_back(x);}   return ans;
}
vector<vector<int>>take2dVectorInput(int m,int n){
    vector<vector<int>>ans;
    for (int i=0;i<m;i++){
        ans.push_back(takeInputVector(n));
    }   return ans;
}
