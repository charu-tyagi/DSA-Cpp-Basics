#include <iostream>
using namespace std;

int main(){

// TO PRINT REVERSE TRIANGLE PATTERN

    int i,j,n;
    cout << "Enter number of lines : ";
    cin >> n;
    for(i=0;i<n;i++){
        for(j=(i+1);j>0;j--){
            cout << j << " ";
        }
        cout << endl;
    }

}