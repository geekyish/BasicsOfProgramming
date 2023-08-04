#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//armstrong number is if we take cube of digits of number then its answer should be equal to the number
int main()
{
    int n=371;
    int num=n;
    int sum=0;
    int remainder=0;
    while(num!=0){
        remainder=num%10;
        sum+=remainder*remainder*remainder;
        num=num/10;
    }
    if(sum==n) cout<<"It is a Armstrong number";
    else cout<<"It is not a Armstrong number";
    return 0;
}