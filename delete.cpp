#include <iostream>

using namespace std;

int main()
{
    int arr[8] = {1,4,3,2,4,24,8,6};
    for(int i = 0; i < sizeof(arr)-1; i++){
        arr[i] = arr[i+1];
    }
    arr[sizeof(arr) - 1] = 0;
    for(int i = 0; i < sizeof(arr) ; i++){
        cout<< arr[i]+" ";
    }

    return 0;
}