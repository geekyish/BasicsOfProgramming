#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;  //temp array
    int left=low;      //starting index of left half of array
    int right=mid+1;   //starting index of right half of array

    //storing elements in array in sorted way

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    //remaining elements left on right or left

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}


void mergeSort(vector<int> &arr, int low, int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr, low, mid); //left half
    mergeSort(arr, mid+1, high); //right half
    merge(arr, low, mid, high); //merge sorted halves
}

int main(){

    vector<int> arr={9, 4, 7, 6, 3, 1, 5};
    int n=7;

    cout<<"Before Sorting Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr, 0, n-1);
    cout<<"After sorting array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}