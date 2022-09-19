#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void binSearch(int arr[] , int si , int ci,int n){
    if(si == ci && arr[si] != n){
        cout<<"Not found";
        return;
    }
    
    int mid = (si + ci)/2;
    if(arr[mid] > n){
        binSearch(arr, si , mid,n);
    }
    else if(arr[mid] < n){
        binSearch(arr, mid+1 , ci,n);
    }
    else{
        cout<<"Found at " << mid-1;
    }

}

int main(){
    cout<<"Enter the size of the array : ";
    int size;
    cin>> size;
    int arr[size];
    cout<<"Enter the array : ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched : ";
    int a;
    cin>>a;
    int mid = size/2;
    sort(arr,arr + size);
    if(arr[mid] > a){
        binSearch(arr,0,mid,a);
    }
    else if(arr[mid] < a){
        binSearch(arr,mid+1,size-1,a);
    }
    else{
        cout<<"Found at" << mid - 1;
    }

}

