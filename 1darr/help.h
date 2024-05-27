#include<vector>
#include<climits>
using namespace std;
vector<int>continuousSumQuery(int A,vector<vector<int>>B){
    vector<int>ans(A,0);
    for (auto x:B){
        ans[x[0]-1]+=x[2];
        if (x[1]<ans.size())    ans[x[1]]-=x[2];
    }
    vector<int>real_ans;
    int curr_sum=0;
    for (auto x:ans){
        curr_sum+=x;
        real_ans.push_back(curr_sum);
    }   return real_ans;
}

int maxSubArray(const vector<int> &A) {
    int ans=INT_MIN;  int flag=0;
    for (auto x:A){
        flag+=x;
        ans=max(ans,flag);
        if (flag<0) flag=0;
    }   return ans;
}
