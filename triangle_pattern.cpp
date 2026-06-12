#include <iostream>
using namespace std;

int main(){

// TO PRINT TRIANGLE PATTERN FOR "*"
   
    int n;
    cout << "Enter number of lines : ";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<(i+1);j++){
            cout << "*" << " ";
        }
     cout << endl;
    }

// TO PRINT TRIANGLE PATTERN FOR NUMBERS

   
    for(int i=0;i<n;i++){
        for(int j=0;j<(i+1);j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }

// TO PRINT TRIANGLE PATTERN FOR CHARACTERS

    char ch= 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<(i+1);j++){
            cout<< ch << " ";
        }
        ch++;
        cout << endl;
    }

// TO PRINT TRIANGLE PATTERN FOR NUMBERS IN INCREASING ORDER

    
    for(int i=0;i<n;i++){
        for(int j=1;j<=(i+1);j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}