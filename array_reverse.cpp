#include <iostream>
using namespace std;

//  TO REVERSE AN ARRAY

void reverseArray(int arr[], int size){
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size=5;
    int arr[size]={10,5,7,34,78};
    
    cout << "Array before reverse = " ;
    for(int i=0;i<size;i++){
        cout << arr[i] << "\t" ;
    }
    
    reverseArray(arr,size);
    
    cout << "\nArray after reverse = ";
    for(int i=0;i<size;i++){
        cout << arr[i] << "\t";
    } 

    
    return 0;
}