//Given a 2d array of sorted binary Numbers (ROW WISE), return the row with the highest count of 1
#include"funcs.h"
int main(){
    int m,n;    cin>>m>>n;
    vector<vector<int>>f=take2dVectorInput(m,n);
    cout<<returnMax1s(f);
}