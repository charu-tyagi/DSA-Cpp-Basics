#include <iostream>
using namespace std;

// TO SWAP THE MAXIMUM AND MINIMUM VALUE OF AN ARRAY

int max(int arr[],int size){
    int max=INT_MIN,maximumIndex=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            maximumIndex=i;

        }
    }
    return maximumIndex;
}

int min(int arr[],int size){
    int min=INT_MAX,minimumIndex=0;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
            minimumIndex=i;
        }
    }
    return minimumIndex;
}

int main(){
    int size=6;
    int arr[size]={2,4,5,66,78,34};
    
    cout << "Array before swapping = " ;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    
    int maximum = max(arr,size);
    int minimum = min(arr,size);
    swap(arr[minimum],arr[maximum]);
    
    cout << "\nArray after swapping = " ;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}





