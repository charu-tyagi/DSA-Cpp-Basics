#include <iostream>
using namespace std;

int main(){
    int count = 1,n=7,i,j;
    int arr[n] = {2,2,1,1,1,2,2};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count > n/2){
            cout << arr[i];
            break;
        }
    }
    

    return 0;
}