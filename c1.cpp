#include<iostream>
using namespace std;

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
    for(int i = 0; i < size; i++){
        if(arr[i] == a){
            cout<<"Found the number";
            break;
        }
        else{
            if(i == size - 1){
                cout<<"Not Found";
            }
        }
    }
}