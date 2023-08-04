#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//Count number of subsequences with sum=k

int printCountofS(int ind, int s, int sum, int arr[], int n){
    if(ind==n){
        if(s==sum) return 1;
        else return 0;
    }
    // pick
    s+=arr[ind];
    int l=printCountofS(ind+1, s, sum, arr, n);

    s-=arr[ind];
    //not pick
    int r=printCountofS(ind+1, s, sum, arr, n);
    return l+r;
}
int main(){
    int arr[]={1, 2, 1};
    int n = 3;
    int sum =2;
    cout<<printCountofS(0, 0, sum, arr, n);

    return 0;
}