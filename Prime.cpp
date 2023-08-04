#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    bool flag=true;
    for(int i=2;i<=n;i++){
        if(n%i==0)
        flag=false;
        break;
        
    }
    if(flag==false)
    cout<<"It is not a prime number";
    else cout<<"It is a prime number";
    return 0;
}