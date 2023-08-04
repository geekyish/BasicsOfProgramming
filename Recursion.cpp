#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Print all subsequences
void print(int idx, vector<int> &ans, int arr[], int n){
    if(idx==n){
        for(auto it: ans){
            cout<<it<<" ";
        }
        if(ans.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //not take or not pick condition, this element not added to your subsequence
    print(idx+1, ans, arr, n);
    //take or pick particular index into subsequence
    ans.push_back(arr[idx]);
    print(idx+1, ans, arr, n);
    ans.pop_back();
    
}
int main(){

    int arr[]={3,1,2};
    int n=3;
    vector<int> ans;
    print(0, ans, arr, n);

    return 0;
}
