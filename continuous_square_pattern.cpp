#include <iostream>
using namespace std;

int main(){

// TO PRINT NUMBERS CONTINUOUSLY IN "N" NUMBER OF LINES

    int n,num=1;
    cout << "Enter number of lines : ";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

// TO PRINT CHARACTERS CONTINUOUSLY IN "N" NUMBER OF LINES
       
    char ch = 'A';
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    
    return 0;
}