#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
    if(ind==n){
        if(s==sum){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    //pick
    ds.push_back(arr[ind]);
    s+=arr[ind];
    printS(ind+1, ds, s, sum, arr, n);
    s-=arr[ind];
    ds.pop_back();
    //not pick
    printS(ind+1, ds, s, sum, arr, n);
}

int main(){

    int arr[]={1, 2, 1};
    int n=3;
    int sum=2;
    vector<int> ds;
    printS(0, ds, 0, sum, arr, n); // (idx, data structure, initsum, reqsum, array, size of array 
    return 0;
}

//if only one subsequence is expected----->

// bool printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
//     if(ind==n){
//     condition satisfied
//         if(s==sum){
//             for(auto it:ds) cout<<it<<" ";
//             cout<<endl;
//              return true;
//         }
//     condition not satisfied
//         else return false;
//     }
//     //pick
//     ds.push_back(arr[ind]);
//     s+=arr[ind];


//     if(printS(ind+1, ds, s, sum, arr, n)==true){
//     return true;
// };


//     s-=arr[ind];
//     ds.pop_back();
//     //not pick

//     if(printS(ind+1, ds, s, sum, arr, n)==true){
//     return true;
// };
// return false;
// }
