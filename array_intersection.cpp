#include<iostream>
using namespace std;

// TO PRINT INTERSECTION OF TWO ARRAYS

void intersection(int arr1[],int arr2[],int size1,int size2){
    int temp;
    for(int i=0;i<size1;i++){
        temp=0;
        for(int j=0;j<size2;j++){
               if(arr1[i]==arr2[j]){
                temp++;
            }
        }
        if(temp != 0){
                cout << arr1[i] << " ";
            }
    }
    return ;
}

int main(){
    int size1 = 5;
    int size2 = 6;
    int arr1[size1] = {1,2,3,4,5};
    int arr2[size2] = {3,4,9,6,7,1};

    intersection(arr1,arr2,size1,size2);
    cout << endl;

    return 0;
}