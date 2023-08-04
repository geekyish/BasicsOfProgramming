#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=121;
    int num=n;
    int ans=0;
    while(n!=0){
        int lastDigit=n%10;
        ans=ans*10+lastDigit;
        n=n/10;
    }
    cout<<ans;
    if(num==ans) cout<<" It is a Palindrome";
    else cout<<" It is not a Palindrome";
    return 0;
}