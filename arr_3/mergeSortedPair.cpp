#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v={1,2,3,4,5};
    v.erase(v.begin()+2);
    for (auto x:v){cout<<x<<"\t";}
}