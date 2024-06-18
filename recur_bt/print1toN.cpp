#include<iostream>
using namespace std;
void print1toN(int A){
       if (A==0)   {cout<<"\n";return;}
        print1toN(A-1);
        cout<<A<<" ";
}

int main(){
    int n;cin>>n;   print1toN(n);
}