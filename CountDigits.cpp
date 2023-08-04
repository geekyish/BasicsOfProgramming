#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=23;
    // cout<<"Enter any number : "<<endl;
    // cin>>n;
    int cnt=0;
    while(n>0){
        int lastDigit=n%10;
        cnt=cnt+1;
        n=n/10;
    }
    cout<<cnt;


    return 0;
}

//tc--> O(log base 10(N)) if divided by 10