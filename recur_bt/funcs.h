#include<string>
#include<iostream>
void printStringNTimes(std::string s,int n){
    if (n==0)   return;
    std::cout<<s<<"\n";
    printStringNTimes(s,n-1);   
}