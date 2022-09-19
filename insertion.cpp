#include <iostream>
using namespace std;
int main()
{
    int arr[100] = {0};
    cout<<"Enter the first five elements : ";
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }
    
    int element;
    cout<<"Enter the element to be added : ";
    cin>>element;
    
    for(int i = 4; i >= 0; i--){
            arr[i+1] = arr[i];
    }
    arr[0] = element;
    
    for(int i = 0; i <= 5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
