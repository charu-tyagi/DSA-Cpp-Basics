#include <iostream>
using namespace std;

int main(){

// TO PRINT NUMBERS CONTINUOUSLY IN "N" NUMBER OF LINES

    int i,j,n,num=1;
    cout << "Enter number of lines : ";
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

// TO PRINT CHARACTERS CONTINUOUSLY IN "R" NUMBER OF LINES
       
    int p,q,r;
    char ch = 'A';
    cout << "Enter number of lines : ";
    cin >> r;
    for(p=0;p<r;p++){
        for(q=0;q<r;q++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    
    return 0;
}