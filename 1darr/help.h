#include<vector>
#include<climits>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
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

int trap(vector<int>& height) {
        vector<int>left(height.size(),0);
        vector<int>right(height.size(),0);
        int l_max=INT_MIN;
        int r_max=INT_MIN;
        for (int i=0;i<height.size();i++){
            l_max=max(l_max,max(height[i],left[i]));
            left[i]=l_max;
        }
        for (int i=height.size()-1;i>=0;i--){
            r_max=max(r_max,max(height[i],right[i]));
            right[i]=r_max;
        }
        int ans=0;
        for (int i=0;i<height.size();i++){
            ans+=min(left[i],right[i])-height[i];
        }   return ans;
}

vector<int> plusOne(vector<int> &A) {
    if (A[A.size()-1]!=9)   {A[A.size()-1]+=1;  return A;}
    else {
        int count=1;
        for (int i=A.size()-1;i>=0;i--){
            A[i]=A[i]+count;
            count=A[i]/10;
            A[i]=A[i]%10;
        }
        if (count){
            A.insert(A.begin(),count);
        }   
        if (A[0]==0){
            vector<int>ans(A.size()-1);
            for(int i=0;i<ans.size();i++){
                ans[i]=A[i+1];
            }   return ans;
        }
        
        return A;
    }
}

vector<int>flip(string A){
    //cout<<"funcCalled"<<A<<"\n";
    pair<int,int>cmp{-1,-1};    
    int flag=0; int curr_ans=0;
    for (int i=0;i<A.size();i++){
        if (A[i]=='1')  continue;
        else {
            for (int j=i+1;j<A.size();j++){
                if (A[j]=='0')  {
                    flag=j-i;   if (curr_ans<flag){
                        //cout<<"Value changed";
                        cmp.first=i;    cmp.second=j;
                        curr_ans=flag;
                    }
                }   else {
                    if (curr_ans==0){
                        cmp.first=i;    cmp.second=i;   curr_ans=1;
                    }i=j;
                    break;
                }
            }
        }
    }
      vector<int>ans({cmp.first,cmp.second}); return ans;
}

int flipKadane(vector<int>A,int B){
    pair<int,int>cmp={-1,-1};
    int zero_cnt=0; int one_cnt=0;  int total_sum=INT_MIN;    
    for (int i=0;i<A.size();i++){
        if (A[i]==0)  zero_cnt++;
        if (A[i]==1)  one_cnt++;
        if (zero_cnt-one_cnt-B<=0)    {
            zero_cnt=0; one_cnt=0;
        } 
            total_sum=max(zero_cnt-one_cnt,total_sum);
    }   return total_sum;
}

