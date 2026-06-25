#include<iostream>
using namespace std;

// TO PRINT UNIQUE VALUES OF AN ARRAY

void unique(int arr[],int size){
    for(int i=0;i<size;i++){
        bool isUnique=true;
        for(int j=0;j<size;j++){
            if(i!=j){
               if(arr[i]==arr[j]){
                isUnique = false;
                break;
                }
            }
        }
        if(isUnique){
                cout << arr[i] << " ";
            }
    }
    return ;
}

int main(){
    int size = 5;
    int arr[size] = {4,4,4,45,6};
    unique(arr,size);
    cout << endl;

    return 0;
}